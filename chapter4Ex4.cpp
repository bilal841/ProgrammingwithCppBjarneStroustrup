/*
    Chapter 4 Exercise 4 - Guessing Game 
    User thinks of a number between 1 and 100 and the program makes a guess.
    The program should identify the number in 7 or less guesses.
    Strategy:
    
    Use Binary Search
    
    Within the given range,start by guessing with the middle of the range.
    
    Keep a track of number of guesses.
    
    If the user's number is less than the guess,
    repeat the search in the lower half of the range till number is found.

    If the user's number is more than the guess,
    repeat the search in the upper half of the range is found.
*/
#include "std_lib_facilities.h"
int main()
{
    try
    {
        cout<<"Guessing Game: \n";
        cout<<"You must think of a number between 1-100.\n"
        <<"I will try to guess it in about 7 tries.\n";
        int guess = 50;
        int tries = 1;
        char guess_state = 'n';
        while(guess_state !='y')
        {
            cout<<"Number of Tries: "<<tries<<"\n"
                <<"Is your number "<<guess<<"?"
                <<"\nPress y for yes. \n"
                <<"If your number is less than "<<guess<<", Press l.\n"
                <<"If your number is more than "<<guess<<", Press m.\n";
            cin>>guess_state;

            switch(guess_state)
            {
                case 'y':
                    cout<<"Correctly guessed.\n";
                    break;
                case 'l':
                    guess /= 2;
                    ++tries; 
                    break;
                case 'm':
                    guess *= 1.5 ;
                    ++tries;
                    break;
                default:
                    cout<<"Incorrect option \n";
                    break;
            }
        }
           
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}