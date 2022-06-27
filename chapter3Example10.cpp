//Program to detect repeated adjacent words in a sequence of words

#include "std_lib_facilities.h"
int main()
{
    //previous word, initilaize to empty string i.e., it is "not a useful word"
    string previous = " ";
    //current word
    string current;
    // Do repeatedly the following
    // 1. read a stream of words
    // 2. check if the word is the same as last
    // for a string, >> reads whitespace-separated words. This ensure that
    // each word is compared to the previous.
    while(cin>>current) //1.
    {
        //2.
        //cout<<"Comparing "<<previous<<" and "<<current<<"\n";
        if (previous == current)
        {
            cout<<"Repeated Word: "<<current<<"\n";
        }
        previous = current;
    }
    return 0;
}