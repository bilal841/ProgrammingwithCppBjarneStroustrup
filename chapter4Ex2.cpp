// Chapter 4 Exercise 2 - Fix the median 
// A median of the series of values is such that exactly as many values
// come before it as in the series as come after it.

// Strategy:
// Check the parity of the number of elements in the series 
//Odd number of elements in series - Middle element is the median
// Even number of elements - Take the average of the two center elements.

//Vectors are mainly used to hold and manipulate data in programs
/*
    Program that reads and stores daily temperatures recorded in a week.
    It then calculates the average and median temperature values.
    
*/
#include "std_lib_facilities.h"
int main()
{
    try
    {
        // vector to hold temperature values
        // Temperature values - floating point values - 24.3 Degree C

        vector <double> daily_temps;
        //read the temperature values from the console and store in the vector
        cout<<"Enter temperatures(C) of this week - separated by space.\n";
        cout<<"Enter | or Ctrl+Z for input end\n";
        for(double temp;cin>>temp;)
        {
            //place the value read into the vector
            daily_temps.push_back(temp);
            //Contine doing this till the user enter a value that is not a double.
            //some special symbol like |
        }
        // //compute average temperature
        // double sum = 0;
        // for (double temp:daily_temps)
        // {
        //     sum += temp;
        // }
        // cout<<"Average Temperature: "<<sum/daily_temps.size()<<"\n";

        //compute the median temperature - value such that it's greater than half values and
        //lesser than the other half set of values.

        //we need to sort the values for this to happen
        //standard libray algorithm
        sort(daily_temps);  
        //From the sorted values, select the middle value 
        //- find the middle index
        //check the parity first then decide on the median
        int mid = 0;
        int mid2 = 0;
        // cout<<"Size == "<<daily_temps.size()<<"\n";
        if(daily_temps.size()%2!=0)
        {
            mid = daily_temps.size()/2 ;
            // cout<<"mid =="<<mid<<" == "<<daily_temps[mid]<<"\n";
            // cout<<"Median Temperature: "<<daily_temps[mid]<<"\n";
        }
        else
        {
            mid = daily_temps.size()/2 ;
            mid2 = mid-1;
            // cout<<"mid =="<<mid<<" == "<<daily_temps[mid]<<"\n";
            // cout<<"mid2 == "<<mid2<<" == "<<daily_temps[mid2]<<"\n";
            cout<<"Median Temperature: "<<(daily_temps[mid] + daily_temps[mid2])/2.0;
        }
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}