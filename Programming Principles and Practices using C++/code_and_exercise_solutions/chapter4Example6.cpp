//Usually, Statements are executed in order they are written
// However, certain special statements can be used to alter the order of
// execution, to execute certain statement and skip over some others.
// For selection among alternative - Selection Statements
// if - selects between alternatives
#include "std_lib_facilities.h"
int main()
{
    try
    {
        int a = 0;
        int b = 0;
        cout<<"Please enter two integers: ";
        cin>>a>>b;

         if(!cin)
        {
            error("Something went wrong with the input \n");
        }
        //simple if
        if(a<b) //check to see if the condition is true
        //condition is usually check by performing comparison
        // using comparison operators >,>=,<,<=,==,!=

        {//Do thins- if the condition is true
            cout << "max(" << a << "," << b <<") is " << b <<"\n";
        }

        //Simple if only performs or skips a block depending on condition
        // For situtations requiring more than 1 alternatives,
        // else is used
        if(a<b) //check to see if the condition is true
        //condition is usually check by performing comparison
        // using comparison operators >,>=,<,<=,==,!=

        {//1st alternative - if the condition is true
            cout << "max(" << a << "," << b <<") is " << b <<"\n";
        }
        else
        {//2nd alternative - when the condition is false
            cout << "max(" << a << "," << b <<") is " << a <<"\n";
        }
       
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}