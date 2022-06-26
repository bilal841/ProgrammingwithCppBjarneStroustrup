//String Operations - Concatenation

//read first and last name and display them together

#include "std_lib_facilities.h"
int main()
{
    
    //Prompt the user
    cout<<"Please enter your first and last names\n";
    
    //Declare two string variables
    string first_name;
    string last_name;

    //Alterantively, we can declare two variable in a single statement
    // string first_name, last_name;

    // input the values in both variables
    cin>>first_name>>last_name;

    // 'add' or concatenate the two strings
    // Concatenation results in a string in which the 
    // characters from first string are followed by
    // the characters from the second string and so on.
    // e.g., if s1 is "Hello" and s2 is "World", 
    // s1 + s2 will have the value "HelloWorld"
    // Be sure to add appropriate spaces via concatenation as needed.
    string full_name = first_name + " " + last_name;

    //output the full_name
    cout<<"Hello , "<<full_name<<"\n";

    return 0;
}