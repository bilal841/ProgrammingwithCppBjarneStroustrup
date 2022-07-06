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
        //compute average temperature
        double sum = 0;
        for (double temp:daily_temps)
        {
            sum += temp;
        }
        cout<<"Average Temperature: "<<sum/daily_temps.size()<<"\n";

        //compute the median temperature - value such that it's greater than half values and
        //lesser than the other half set of values.

        //we need to sort the values for this to happen
        //standard libray algorithm
        sort(daily_temps);  
        //From the sorted values, select the middle value - find the middle index
        int mid = daily_temps.size()/2 ;
        cout<<"Median Temperature: "<<daily_temps[mid]<<"\n";
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}