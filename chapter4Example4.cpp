//Be mindful of the expression containing floating point
// operands and appropriate division(integer vs float)
#include "std_lib_facilities.h"
int main()
{
    try
    {
        double centigrade;
        double fahrenheit;
        cout<<"Enter temperature in Celsius: ";
        cin>>centigrade;
        if(!cin)
        {
            error("Something went wrong with the input \n");
        }
        //9/5 is integer division - results in 1 instead of 1.8
        
        //fahrenheit = 9/5*centigrade+32;

        //Make either 9 or 5 or ideally both a floating point value
        fahrenheit = 9.0/5.0*centigrade+32;

        cout<<"Temperature in Fahrenheit: "<<fahrenheit<<"\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}