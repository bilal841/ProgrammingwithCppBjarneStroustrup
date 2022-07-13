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
        cout<<"area(\'7\',\'3\') == "<<s4<<endl;
        //Conversion from char to int - ASCII values of '7' and '3' - result will be incorrect
        
        //Type errors

        //int x0 = arena(7); //undeclated function
        //int x1 = area(7); //incorrect number of arguments
        //int x2 = area("seven",2); //incorrect type of argument
        
        //Non-errors - Errors which are not detected by compilers but will produce unexpected results
        
        //Will compile but can width be -7 ???
        int x4 = area(10,-7);
        cout<<"area(\'10\',\'-7\') == "<<x4<<"\n";

        //Ok but will truncate arguments - call area(10,9)
        int x5 = area(10.7,9.3);
        cout<<"area(10.7,9.3) == "<<x5<<"\n";

        //Ok but result will be truncated to char
        char x6 = area(100,9999);
        cout<<"area(100,9999) == "<<x6<<"\n";

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