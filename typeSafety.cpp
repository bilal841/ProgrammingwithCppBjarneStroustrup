#include "std_lib_facilities.h"
int main()
{
     // using a variable before 
    // it has been initialized is not considered type-safe:

    // we “forgot” to initialize
    // the value of x is undefined
    try
    {
        double x ;
        double y = x; 
        cout<<"x = "<<x<<"\n";
        cout<<"y = "<<y<<"\n";

        // the meaning of + and the value of z are undefined
        double z = 2.0+x; 
        cout<<"x = "<<x<<"\n";
        cout<<"z = "<<z<<"\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}