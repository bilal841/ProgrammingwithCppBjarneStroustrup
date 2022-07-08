//calculate and print a table of squares 0-99
//using for loop
#include "std_lib_facilities.h"
int main()
{
    try
    {
        
        //start from 0
        //Initialization
        /*
        int i = 0;
    
        //condition
        while(i<100) //i<=99
        {
            cout<<i<<"\t"<<i*i<<"\n"; // Display the number , a tab , and square of the number
            //increment
            ++i; // increase value of i by 1 - increment i by 1
        }
        */
       
       for (int i = 0; i < 100; ++i)
       {    
            cout<<i<<"\t"<<i*i<<"\n"; // Display the number , a tab , and square of the number
            //++i; // Don't increment the counter varible inside body of the loop - unless you really want to see something unexpected
       }
    
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}