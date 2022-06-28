//Program to converted spelled-out-number into digits.
//Converts the following:
// zero - 0
// one - 1
//two - 2
//three - 3
//four - 4
//remaining - not a number I know
#include "std_lib_facilities.h"
int main()
{
    try
    {
        string spelled_number;
        cout<<"Enter a spelled-out-number(single digit 0-4): ";
        cin>>spelled_number;
        if(!cin)
        {
            error("Something went wrong with the input \n");
        }
        //handle the five possible inputs - also handle uppercase , lowercase and capital case
        if(spelled_number == "one" || spelled_number == "One" || spelled_number == "ONE")
        {
            cout<<"Corresponding Digit is 1\n";
        }
        else if(spelled_number == "two" || spelled_number == "Two" || spelled_number == "TWO")
        {
            cout<<"Corresponding Digit is 2\n";
        }
        else if(spelled_number == "three" || spelled_number == "Three" || spelled_number == "THREE")
        {
            cout<<"Corresponding Digit is 3\n";
        }
        else if(spelled_number == "four" || spelled_number == "Four" || spelled_number == "FOUR")
        {
            cout<<"Corresponding Digit is 4\n";
        }
        else
        {
            cout<<"Not a number I know\n";
        }       

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}