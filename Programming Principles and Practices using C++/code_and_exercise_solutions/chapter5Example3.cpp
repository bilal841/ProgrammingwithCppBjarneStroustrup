/*
    Author : Bilal Nasir
    Chapter 5 Example 3 
    Run-time Errors
    
    
*/
//Function to calculate the area of a rectangle
int area(int length, int width)
{
    return length * width;
}

//Function to calculate the area within frame
int framed_area(int x, int y)
{
    return area(x-2,y-2);
}
#include "std_lib_facilities.h"
int main()
{
    int a = -1;
    int b = 2;
    int c = 4;

    cout<<"a == "<<a<<"\n";
    cout<<"b == "<<b<<"\n";
    cout<<"c == "<<c<<"\n";
    int area1 = area(a,b);
    cout<<"area1 == "<<area1<<"\n";
    int area2 = framed_area(1,c);
    cout<<"area2 == "<<area2<<"\n";
    int area3 = framed_area(b,c);
    cout<<"area3 == "<<area3<<"\n";
    //converting area1 to doubel to get floating point division
    double ratio = double(area1)/area3;
    cout<<"ratio == area1/area3 == "<<ratio<<"\n";
    return 0;
}