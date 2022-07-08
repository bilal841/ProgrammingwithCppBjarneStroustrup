//Type Conversions
//Avoid Narrowing Conversions - where converting to a smaller type
// might result in some loss of value
#include "std_lib_facilities.h"
int main()
{
    try
    {
        double d = 2.5;
        int i = 2;

        //The result of an operation depends on the type of the operands
        //If the operands are of different types, larger type is used by default
        double d2 = d / i; // d2 == 1.25
        cout<<d<<"/"<<i<<"=="<<d2<<"\n";

        int i2 = d/i; //i2==1
        cout<<d<<"/"<<i<<"=="<<i2<<"\n";
        //loss of value due to result being stored in int

        //int i3{d/i}; //Compiler will issue a warning
        //Contrary to what people might say, DO NOT IGNORE THE WARNING
        //cout<<d<<"/"<<i<<"=="<<i3<<"\n";

        //Be careful about integer and float divisions


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