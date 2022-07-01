//Missing Break in case

#include "std_lib_facilities.h"
int main()
{
    try
    {
        constexpr double cm_per_inch = 2.54; // number of centimeters in
        // an inch
        double length = 1; // length in inches or
        // centimeters
        char unit = 'a';
        cout << "Please enter a length followed by a unit (c or i):\n";
        cin >> length >> unit;
        
        if(!cin)
        {
            error("Something went wrong with the input \n");
        }

        switch (unit)
        {
            case 'i':
            cout << length << "in == " << cm_per_inch*length << "cm\n";
            //missing break;
            case 'c':
            cout << length << "cm == " << length/cm_per_inch << "in\n";
            //missing break;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}