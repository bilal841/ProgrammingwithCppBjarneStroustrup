/*
    Author : Bilal Nasir
    Chapter 5 Example 1 
    Compile Time Errors
    1. Syntax Errors
    2. Type Errors
    
*/
#include "std_lib_facilities.h"
//Function to calculate the area of a rectangle
int area(int length, int width)
{
    return length * width;
}
int main()
{
    try
    {
        //Syntax Errors
        // in calls to the function area()
        
        //int s1 = area(7; // error: missing )
        //int s1 = area(7); //added the missing ) 
        
        //After the removal of syntax error - type errors are checked
        //Since the function call is missing an argument - error : too few arguments to function  
        //Correct would be
        int s1 = area(7,2); //added the missing argument

        //int s2 = area(7) //error: missing ;
        //int s2 = area(7); //add the missing ;

         //After the removal of syntax error - type errors are checked
        //Since the function call is missing an argument - error : too few arguments to function  
        //Correct would be

        int s2 = area(7,3); // add the missing argument

        //Int s3 = area(7); //error: Int is not a type
        //int s3 = area(7); //correct the type name to int
        
        //After the removal of syntax error - type errors are checked
        //Since the function call is missing an argument - error : too few arguments to function  
        //Correct would be
        
        int s3 = area(7,9);

        //error non-terminated character - missing '

        //int s4 = area('7'); //add the missing '
        //After the removal of syntax error - type errors are checked
        //Since the area() has two arguments - 
        int s4 = area('7','3'); 
        // although the compiler doesn't generate an error- this will result in runtime error
        cout<<s4<<endl;
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