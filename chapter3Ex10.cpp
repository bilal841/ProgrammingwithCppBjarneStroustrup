//Program that inputs and operation followed by two oprands and output the result.  
#include "std_lib_facilities.h"
int main()
{
    try
    {
        char operation;
        double operand1, operand2;
        cout<<"Enter an operation followed by two operands(+ 12 11)(separated by single spaces)\n";
        cin>>operation>>operand1>>operand2;
        if(!cin)
        {
            error("Something went wrong with the inputs \n");
        }
        switch(operation)
        {
            case '+':
                    cout<<operand1<<" + "<<operand2<<" == "<<operand1+operand2<<"\n";
                    break;
            case '-':
                    cout<<operand1<<" - "<<operand2<<" == "<<operand1-operand2<<"\n";
                    break;
            case '*':
                    cout<<operand1<<" * "<<operand2<<" == "<<operand1*operand2<<"\n";
                    break;
            case '/':
                    cout<<operand1<<" / "<<operand2<<" == "<<operand1/operand2<<"\n";
                    break;
            default:
                    cout<<"Not a valid operation(Allowed Operations: + - / *)";
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}