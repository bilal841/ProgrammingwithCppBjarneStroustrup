//Convert from inches to centimeter or centimeters to inches
// use 'i' to denote inches anc 'c' to denote centimeters

//Use switch statement for selection between multiple cases

#include "std_lib_facilities.h"
int main()
{
    try
    {
        constexpr double cm_per_inch = 2.54; // one inch == 2.54 cm
        double length = 1; // length in (i)nches or (c)entimeters

        char unit = 0; // variable for getting unit - i for inch , c for centimeter

        cout<<"Please enter a length followed by a unit(c for centimeter or i for inch):\n";
        cin>>length>>unit;
        //Check to see if inputs are of correct type
        if(!cin)
        {
            error("Something's wrong with input \n");
        }
        switch (unit)
        {
        case 'i':
            cout<<length<<" in == "<<cm_per_inch * length<<" cm \n";
            break;
        case 'c':
            cout<<length<<" cm == "<<length / cm_per_inch<<" in \n";
            break;
        
        default:
            cout<<"Sorry , Unknow unit named "<<unit<<"\n";
            break;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}