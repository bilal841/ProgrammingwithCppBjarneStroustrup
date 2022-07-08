//Vectors are mainly used to hold and manipulate data in programs
/*
    Program that reads and stores a list of words. It then displays them in 
    lexicographical order
    A
    Apple
    Atom
    ...
*/
#include "std_lib_facilities.h"
int main()
{
    try
    {
        // vector to hold temperature values
        // String vector to store the input word

        vector <string> dictionary;
        //read the temperature values from the console and store in the vector
        cout<<"Enter some words - separated by space. Hit enter at the end\n";
        cout<<"Press Ctrl+Z and Enter to continue sorting. \n";
        for(string temp;cin>>temp;)
        {
            //place the value read into the vector
            dictionary.push_back(temp);
            //Contine doing this till the user enter a value that is not a double.
            //some special symbol like |
        }
        //To display the words in lexicographical order
        //we need to sort the values for this to happen
        //standard libray algorithm
        sort(dictionary);  
        
        //If a word is reapted in the dictionary, don't display it more than once
        //For this, check to see if  the current word being display is not similar to 
        //the immediate preceeding word.
        // Corner Case : First word has nothing preceeding to it.
        // Display it as such .
        for(int i = 0; i < dictionary.size(); ++i)
        {
            if(i == 0 || dictionary[i-1] != dictionary[i])
            {
                cout<<dictionary[i]<<"\n";
            }
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}