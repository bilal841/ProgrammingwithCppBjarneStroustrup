//Statements
// Expression Statements - an expression followed by a semicolon
#include "std_lib_facilities.h"
int main()
{
    try
    {
        //Each statement has a clear meaning
        //declaration statement
        int number;
        //declaration and initialization statement
        float salary = 25000.24;

        salary = salary + 2500;

        int a;
        int b=2;
        //a = b++b; // error missing semicolon 
        // meaning is ambiguous 
        //a = b++ and  b
        //a = b and ++b
        a = b++;b;
        //Let's eat grandma vs. Let's eat, grandma

        //Statements are executed in order they are written

        //Statements can be useless
        1+2;
        a*b;
        //compiler will not give any errors or warning 
        //Logical Errors

        //Expression statements are usually assignment statements,
        // I/O statements or function calls.
        a=0;
        cout<<"a == "<<a<<"\n";
        if(a>5);
        {
            cout<<"a is greater than 5 \n";
        }

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