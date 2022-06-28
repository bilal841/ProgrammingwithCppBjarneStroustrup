// Handling input format error by using default initialization values

// read name and age

#include "std_lib_facilities.h"
int main()
{
    try
    {
        //prompt for values
        cout<<"Please enter your first name and age\n";

        // string variable - "???" - string means "don't know the name"
        string first_name = "???";
        // integer variable -0 - string means "don't know the age" "
        int age = 0 ;
        
        /*
        //read a string
        cin>>first_name;
        // read an integer
        cin>>age;
        */
        // Alternatively, read a string followed by an integer
        cin>>first_name>>age;

        if(!cin)
        {
            error("Something's wrong with input \n");
        }
        
        // output values
        cout<<"Hello,"<<first_name<<" (age "<<age<<")\n";

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }   
    return 0;
}