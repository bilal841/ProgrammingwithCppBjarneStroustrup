//calculate and print a table of squares 0-99

#include "std_lib_facilities.h"
int main()
{
    try
    {
        //start from 0
        int i = 0;

        while(i<100) //i<=99
        {
            cout<<i<<"\t"<<i*i<<"\n"; // Display the number , a tab , and square of the number
            ++i; // increase value of i by 1 - increment i by 1
        }

       
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}