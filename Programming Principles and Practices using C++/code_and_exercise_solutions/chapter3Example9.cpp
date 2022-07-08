//String Operations - string comparison

//read two strings and compare them

#include "std_lib_facilities.h"
int main()
{
    
    try
    {
       //Prompt the user
        cout<<"Please enter two names\n";
        
        //Declare two string variables
        string first_name;
        string second_name;

        //Alterantively, we can declare two variable in a single statement
        // string first_name, second_name;

        // input the values in both variables
        cin>>first_name>>second_name;

        if(!cin)
        {
            error("Something went wrong with inputs \n");
        }
        // Comparing two strings actually compares them
        // character by character. In case of any character mismatch,
        //(character case is also considered), strings are not
        // not considered equal.

        if(first_name == second_name)
        {
            cout<<"Both names are same \n";
        }

        if(first_name < second_name)
        {
            cout<<first_name<<" is alphabetically before "<<second_name<<"\n";
        }
        
    if(first_name > second_name)
        {
            cout<<first_name<<" is alphabetically after "<<second_name<<"\n";
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    

    return 0;
}