/*
    Chapter 4 Exercise 6 
    
    Make a vector holding the ten string values "zero", "one", . . . "nine".
    Use that in a program that converts a digit to its corresponding
    spelled-out value; e.g., the input 7 gives the output seven.
    
    Have the same program, using the same input loop, convert spelled-out numbers into
    their digit form; e.g., the input seven gives the output 7
    
    Strategy:
    Simplest -each spelled-out value is at the index specified by the digit
    "zero" at index 0
    "one" at index 1
    ...
    "nine" at index 9

    Just display the element at the respective index.
    
*/
#include "std_lib_facilities.h"
int main()
{
    try
    {
        vector<string> digit_strings = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        //vector<int> digit_numeric = {0,1,2,3,4,5,6,7,8,9};
        
        int digit_input;
        
        cout<<"Enter a single digit(0-9) to convert into corresponding spelled-out value.\n"
            <<"Enter | to exit.\n";
        
        while(cin>>digit_input)
        {
            cout<<digit_input<<" == "<<digit_strings[digit_input]<<"\n"
                <<digit_strings[digit_input]<<" == "<<digit_input<<"\n";
        }
        if(!cin) // inputting | results in this message.
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