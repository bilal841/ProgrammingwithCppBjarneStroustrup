//Usually, Statements are executed in order they are written
// However, certain special statements can be used to alter the order of
// execution, to execute certain statement and skip over some others.
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