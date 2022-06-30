//Expression - computes a value from any number of operands
#include "std_lib_facilities.h"
int main()
{
    try
    {
        //Simplest expression is a literal e.g, 4, 2.3, 'a', true, "Hello"
        //Name of variable is also an expression

        int length = 20;
        int width = 40;
        int area = length * width;

        //Expression - General form
        //l-value = r-value
        //l-value is always an object name.
        // If a variable(name) is on the left-hand side (lvalue) - means object denoted
        // by this name.
        // If the variable(name) is on the right hand side (rvalue) - means the values stored
        // in the object denoted by this name

        //Complex Expressions involves combining simpler expression using various operands

        int perimeter = (length+width)*2; // Order of operation is enforced by parenthesis

        //Be careful while writing expressions
        //Take care of precedence of operators

        int p = length+width*2
        //imples width x 2 , added to length - Mistake's on you

        

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