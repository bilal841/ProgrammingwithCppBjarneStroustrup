//Program to detect repeated adjacent words in a sequence of words

#include "std_lib_facilities.h"
int main()
{
    try
    {
        //previous word, initilaize to empty string i.e., it is "not a useful word"
        string previous = " ";
        //current word
        string current;
        cout<<"Please enter some words(Press Ctrl+Z and enter to stop) : ";
        int number_of_words = 0;
        // Do repeatedly the following
        // 1. read a stream of words
        // 2. check if the word is the same as last
        // for a string, >> reads whitespace-separated words. This ensure that
        // each word is compared to the previous.
        while(cin>>current) //1.
        {
            //2.
            //cout<<"Comparing "<<previous<<" and "<<current<<"\n";
            //increase word count
            if(!cin)
            {
                error("Something's wrong with input");
            }
            ++number_of_words;

            if (previous == current)
            {
                cout<<"Word number "<<number_of_words
                    <<" Repeated Word: "<<current<<"\n";
            }
            
            previous = current;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}