/*
    Author : Bilal Nasir
    Chapter 5 Example 2 
    Linktime Errors
    
*/
#include "std_lib_facilities.h"
//Function to calculate the area of rectangle
//Only function declaration is not enough
//int area(int length, int width);
//Function must have a declaration and definition
int area(int length, int width)
{

}

//Functions with the same name but type mismatch will be ignored
//different return type and different argument type
double area(double x, double y)
{

}

//Different number of arguments
int area(int x, int y, char unit)
{

}

int main()
{
    try
    {
        int x = area(2,3);
        //undefined refrence to area()
        if(!cin)
        {
            error("Something went wrong with the input \n");
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}