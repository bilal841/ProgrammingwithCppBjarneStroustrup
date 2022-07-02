/*
The character 'b' is char('a'+1), 'c' is char('a'+2), etc. Use a loop to write out
a table of characters with their corresponding integer values:
a 97
b 98
c 99
. . .
z 122
This time use a for loop.
Modify your program to also write out a table of the
integer values for uppercase letters and digits
*/
#include "std_lib_facilities.h"
int main()
{
    try
    {   
       //for(intialization; condition; increment)
        cout<<"lowercase letters \n";
        for(char ch = 'a'; ch <='z'; ++ch)
        {
            cout<<ch<<" "<<(int)ch<<"\n";
        }

        cout<<"UPPERCASE LETTERS \n";
        for(char ch='A'; ch <='Z'; ++ch)
        {
            cout<<ch<<" "<<(int)ch<<"\n";        
        }
        
        cout<<"Digits \n";
        for(char ch='0'; ch <='9'; ++ch)
        {
            cout<<ch<<" "<<(int)ch<<"\n";        
        }


    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}