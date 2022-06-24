// >> - Extraction operator is sensitive to variable's type

// read name and age

#include "std_lib_facilities.h"
int main()
{
    //prompt for values
    cout<<"Please enter your first name and age\n";

    // string variable
    string first_name;
    // integer variable
    int age;
    //read a string - 
    //string read by using >> ends by default at the first whitespace
    cin>>first_name;
    // read an integer
    cin>>age;

    // output values
    cout<<"Hello,"<<first_name<<" (age "<<age<<")\n";

    return 0;
}