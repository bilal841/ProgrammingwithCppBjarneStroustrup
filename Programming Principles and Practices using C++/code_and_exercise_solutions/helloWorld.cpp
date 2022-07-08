#include "std_lib_facilities.h"
int main()
{
    try
    {
        cout<<"Hello, World! \n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    return 0;
}