//Program to convert miles into kilometers

#include "std_lib_facilities.h"
int main()
{
    double kilometers=0 , miles=0;
    
    try
    {
        cout<<"Enter the number of miles(integer or float value): ";
        cin>>miles;

        //error checking
        if (!cin)
        {
            cout<<"Wrong Input \n";
        }

        //1miler = 1.609 km
        kilometers = miles * 1.609;

        cout<<miles<<" miles  = "<<kilometers<<" kms";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    

    return 0;
}