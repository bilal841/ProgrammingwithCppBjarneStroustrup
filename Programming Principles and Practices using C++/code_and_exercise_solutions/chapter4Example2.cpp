//Constant - For expressing symbolic constants
//Constant Expressions -an expression with an integer value
//composed exclusively of constants
//Used for those values that needs to kept fixed
//Prevent accidental changes
#include "std_lib_facilities.h"
int main()
{
    try
    {
        constexpr double pi = 3.14159;
        double radius = 2;
        //Let's assume pi = 4
        //We can't and mustn't.
        //pi = 4; // error assignment to constant

        //But we can use the value of named constant in our expression. 
        double area_circle = pi * radius * radius; 

        //Alternatively, we could have written the above statment as
        double area = 3.14159 * radius * radius ;
        // But the former statement is better in practice 
        // Why ?
        //Makes code mor readable
        // Can modify code easily 
        // e.g., change the value of pi to 10 digits
        // we could simply modify the expression on line 9 to 
        //constexpr double pi = 3.1415926535
        //Prefer not to use too many literals
        //299792458 ???

        //Speed of Light -
        //constexpr double speed_of_light = 299792458;
        //sounds better ?

        // a literal is a constant expression

        constexpr int max = 17;
        int val = 19;

        //constant expression - a const int plus a literal
        //max+2

        //not a constant expression as it uses a variable
        //val + 2

        //constexpr must be a given a value that is known as compile time
        // vs const that can be used to initialize a constant with a value
        // that is not known at compile
        // But once the value is set it can't be changed.

        int n;
        cout<<"Enter an integer: ";
        cin>>n;
        constexpr int c1 = max + 7;
        cout<<"c1 = "<<c1<<"\n";
        const int c2 = n + 7;
        cout<<"c2 = "<<c2<<"\n";
        //error
        //c1 = 12; //c1 is const
        //c2 = 5; //c2 is const
        
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