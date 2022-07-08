// read name and age(in years)
//Output age in months - multiplying value of age by 12 using *
// Age in double - to allow for putting values like five and half etc

#include "std_lib_facilities.h"
int main()
{
    try
    {
         //prompt for values
        cout<<"Please enter your first name and age\n";

        // string variable - "???" - string means "don't know the name"
        string first_name = "???";
        // double variable -0 - means "don't know the age" "
        double age = 0 ;
        if(!cin)
        {
            error("Something went wrong with the input \n");
        }
        /*
        //read a string
        cin>>first_name;
        // read an integer
        cin>>age;
        */
        // Alternatively, read a string followed by an integer
        cin>>first_name>>age;
        
        // output values
        cout<<"Hello,"<<first_name<<" (age "<<age*12<<" months)\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}