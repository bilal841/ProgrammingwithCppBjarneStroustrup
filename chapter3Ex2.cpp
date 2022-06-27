//Program to convert miles into kilometers

#include "std_lib_facilities.h"
int main()
{
    double kilometers, miles;
    
    cout<<"Enter the number of miles: ";
    cin>>miles;

    //1miler = 1.609 km
    kilometers = miles * 1.609;

    cout<<miles<<" miles  = "<<kilometers<<" kms";

    return 0;
}