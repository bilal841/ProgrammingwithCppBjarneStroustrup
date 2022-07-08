//Convert from inches to centimeter or centimeters to inches
// use 'i' to denote inches anc 'c' to denote centimeters

//Dangers of over-simplification

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
        //Check to see if inputs are of correct types
        if(!cin)
        {
            error("Something went wrong with the input \n");
        }

        //If the unit is 'i' - convert inches to centimeters , else convert centimeters to inches
        if(unit == 'i')
        {
            cout<<length<<" in == "<<cm_per_inch * length<<" cm \n";
        }
        else if(unit == 'c')
        {
            cout<<length<<" cm == "<<length / cm_per_inch<<" in \n";
        }
        else
        {
            cout<<"Sorry , Unknow unit named "<<unit<<"\n";
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}