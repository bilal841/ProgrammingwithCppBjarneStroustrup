/*
Write a program that “bleeps” out words that you don’t like; that is, you
read in words using cin and print them again on cout. If a word is among a
few you have defined, you write out BLEEP instead of that word.

*/
#include "std_lib_facilities.h"
int main()
{
    try
    {
        //List of disliked words
        vector <string> disliked = {"Okra", "Broccoli", "Gourd"};
        bool found = false;

        //Read in the word - in a string and display if it is not in the disliked vector
        cout<<"Input a word - Press end to signify the end of word\n"
            <<"Press Ctrl+Z and enter to signfy end of input\n";

        // for input
        for(string temp;cin>>temp;)
        {
            // for checking to see if it exists in the list of disliked words
           for(string check:disliked)
           {
                if(temp == check)
                {
                    found = true;
                    break;
                }
                else
                {
                    found = false;
                }
           }

           if(found)
           {
            cout<<"BLEEP!\n";
           }
           else
           {
            cout<<temp<<"\n";
           }
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}