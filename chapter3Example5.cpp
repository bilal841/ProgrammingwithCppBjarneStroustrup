// Handling white space in string

// read and display name 

#include "std_lib_facilities.h"
int main()
{
    //prompt for values
    cout<<"Please enter your first name and second name\n";

    // string variables - "???" - string means "don't know the name"
    string first_name   = "???";
    string second_name  = "???";
    
    //string read using >> is terminated by whitespace
    //reads only a single word
    cin>>first_name>>second_name;
    
    // output values
    //cout<<"Hello,"<<first_name<<second_name;
    cout<<"Hello,"<<first_name<<" "<<second_name;

    return 0;
}