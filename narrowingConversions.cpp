#include "std_lib_facilities.h"
int main()
{
    double d = 0;
    cout<<"Enter a double: "; // prompt the user
    while (cin>>d) 
    {   // repeat the statements below
        // as long as we type in numbers
        int i = d; // try to squeeze a double into an int
        char c = i; // try to squeeze an int into a char
        int i2 = c; // get the integer value of the character
        cout <<" Double == " << d // the original double
             <<"\n Integer == "<< i // converted to int
             <<"\n Integer out of Character == " << i2 // int value of char
             <<"\n Equivalent char is '" << c << "'\n" // the char
             << "Enter a double: "; // prompt the user

    }
    return 0;
}