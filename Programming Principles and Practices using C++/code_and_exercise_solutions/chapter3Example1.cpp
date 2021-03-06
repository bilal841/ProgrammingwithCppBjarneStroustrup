//read and write first name
#include "std_lib_facilities.h"
int main()
{
    // first_name is a variable of type string
    string first_name="";
    
    try
    {
        //Prompt to display on screen for the user
        cout<<"Please enter your first name(followed by 'enter'):";
        
        //read characters into the variable named first_name
        cin>>first_name;

        if(!cin)
        {
            error("Something's wrong with the input.\n");
        }
        
        //display the value of variable first_name
        cout<<"Hello, "<<first_name<<"!\n"; 
        
        // The above line can also be written as follow but its needless repetition!
        cout << "Hello, ";
        cout << first_name;
        cout << "!\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    
    return 0 ;
}