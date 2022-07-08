/*
    Chapter 4 Example 7
    "Mini Calculator" 
    Write a program that performs as a very simple calculator. Your calculator
    should be able to handle the four basic math operations — add, subtract,
    multiply, and divide — on two input values. Your program should prompt
    the user to enter three arguments: two double values and a character to
    represent an operation. If the entry arguments are 35.6, 24.1, and '+', the
    program output should be The sum of 35.6 and 24.1 is 59.7.

    Modify the “Mini Calculator” to accept (just) single-digit
    numbers written as either digits or spelled out.
    
    Strategy:
    Use a switch statement and handle each type of operation in a separate case.
    //Break down into functions ????
    
*/
#include "std_lib_facilities.h"
int main()
{
    try
    {
        //Strings for handling input
        string st_op1;
        string st_op2;
        char op;

        //Vectors for possible input values
        vector<string> digit_strings = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        vector<string> digits_string_num = {"0","1","2","3","4","5","6","7","8","9"};

        //vector for converting possible input values into corresponding doubles 
        vector<double> digit_numeric = {0,1,2,3,4,5,6,7,8,9};
        
        //double used for actual calculations
        double operand1;
        double operand2;
        bool correct_input = false;
        

        cout<<"Enter two single digits(either as digits or spelled out) operands followed by an operation(+,-,*,/) to perform on the two values.\n"
            <<"Correct format for input:\n"
            <<"1 2 + or one two + or 1 two + or one 2 + "
            <<"Press | to exit.\n";
        
        while(cin>>st_op1>>st_op2>>op)
        {
            //One approach is to convert the string to double first - since the vector remain fixed to size 10 - call to size() not necessary 
            // But is it a good approach.
            //also need to check if the input values are in the given vector - to handle incorrectly input string
            // such as oen instead of one
            //Reset to false after each input cycle
            correct_input = false;
            
            for(string d:digit_strings)
            {
                if(st_op1 == d || st_op2 == d)
                {
                    correct_input = true;
                }
            }
            //check only single digits are entered in numeric form
            for(string d:digits_string_num)
            {
                if(st_op1 == d || st_op2 == d)
                {
                    correct_input = true;
                }
            }

            cout<<correct_input<<"\n";
            // Then continue to conversion to double
            for(int i = 0; i < 10; ++i)
            {
                if (st_op1 == digit_strings[i])
                {
                    operand1 = digit_numeric[i];
                }
                 
                if (st_op2 == digit_strings[i])
                {
                    operand2 = digit_numeric[i];
                }

                if (st_op1 == digits_string_num[i])
                {
                    operand1 = digit_numeric[i];
                }
                 
                if (st_op2 == digits_string_num[i])
                {
                    operand2 = digit_numeric[i];
                }
            }
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
                    cout<<"The division of "<<operand1<<" by "<<operand2<<" is "<<operand1 / operand2<<".\n";
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