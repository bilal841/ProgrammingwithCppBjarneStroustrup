/*
    Chapter 4 Example 5 
    Write a program that performs as a very simple calculator. Your calculator
    should be able to handle the four basic math operations — add, subtract,
    multiply, and divide — on two input values. Your program should prompt
    the user to enter three arguments: two double values and a character to
    represent an operation. If the entry arguments are 35.6, 24.1, and '+', the
    program output should be The sum of 35.6 and 24.1 is 59.7.
    
    Strategy:
    Use a switch statement and handle each type of operation in a separate case.

    
*/
#include "std_lib_facilities.h"
int main()
{
    try
    {
        double operand1;
        double operand2;
        char op;
        cout<<"Enter two floating point values followed by an operation(+,-,*,/) to perform on the two values.\n"
            <<"Press | to exit.\n";
        while(cin>>operand1>>operand2>>op)
        {
            switch(op)
            {
                case '+':
                    cout<<"The sum of "<<operand1<<" and "<<operand2<<" is "<<operand1 + operand2<<".\n";
                    break;
                case '-':
                    cout<<"The difference of "<<operand1<<" and "<<operand2<<" is "<<operand1 - operand2<<".\n";
                    break;
                case '*':
                    cout<<"The product of "<<operand1<<" and "<<operand2<<" is "<<operand1 * operand2<<".\n";
                    break;
                case '/':
                    cout<<"The division of "<<operand1<<" and "<<operand2<<" is "<<operand1 / operand2<<".\n";
                    break;
                default:
                    cout<<"Invalid op-\nValid operations: + , -, *, / \n";
                    break;
            }
        }

        if(!cin)
        {
            error("Exiting Program \n");
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}