#include "std_lib_facilities.h"
int main()
{
    int a = 1000;
    char b = a;
    cout<<"Integer == "<<a<<"\n";
    cout<<"Character == "<<(int)b<<"\n";

    //outlaw narrowing conversion
    double x {2.7}; //OK
    //int y {x};      //error:double -> int might narrow

    // When the initializer is an integer literal,
    // compiler can check actual value and
    // accept values that don't imply narrowing
    
    //char b1 {1000}; //error: narrowing assuming char is 1 byte long
    char b4 {48}; // OK
    return 0;
}