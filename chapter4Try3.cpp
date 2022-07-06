/*
The character 'b' is char('a'+1), 'c' is char('a'+2), etc. Use a loop to write out
a table of characters with their corresponding integer values:
a 97
b 98
c 99
. . .
z 122
*/
#include "std_lib_facilities.h"
int main()
{
    try
    {   
        //loop counter declaration and initialization
        char ch = 'a'; // what the computer essentially see are number - we can take advantage of that
        // check condition to see if we have moved past 'z'
        while(ch<='z')
        {
            //Display the character and its ASCII number
            cout<<ch<<" "<<(int)ch<<"\n";
            ++ch;

        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}