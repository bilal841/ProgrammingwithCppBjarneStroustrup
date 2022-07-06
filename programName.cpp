/*
    Chapter # Example/Exercise # 
    Problem Statement
    
    Strategy:
    
*/
#include "std_lib_facilities.h"
int main()
{
    try
    {
        if(!cin)
        {
            error("Something went wrong with the input \n");
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}