/*
Implement square() without using the multiplication operator; that is, do the
x*x by repeated addition (start a variable result at 0 and add x to it x times)
*/
#include "std_lib_facilities.h"
int square(int x);
int main()
{
    try
    {
        int result = square(4);
        cout<<"Square of 4 is "<<result;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
int square(int x)
{
    int sq = 0;
    for(int i=1 ;i<=x; i++)
    {
        sq +=x;
    }
    return sq;
}