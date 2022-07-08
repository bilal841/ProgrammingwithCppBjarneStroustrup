// Program to determine whether an integer is odd or even
#include "std_lib_facilities.h"
int main()
{
    try
    {
        int number;
        cout<<"Enter a number: ";
        cin>>number;
        if(!cin)
        {
            error("Something went wrong with the input \n");
        }
        if(number % 2 == 0)
        {
            cout<<number<<" is even.\n";
        }
        else
        {
            cout<<number<<" is odd.\n";
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}