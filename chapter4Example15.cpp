//Functions
#include "std_lib_facilities.h"
//Function Declaration - let's the user and compiler know that there is a named block of code .
// return_type function_name(function_parameters,...)
// Function_parameters are also called formal parameters.
int square(int x);

int main()
{
    try
    {
        //Function call - give the function some value to perform its tasks
        // What is given to the functon is callled arguments - actual parameters
        // These are the actual values on which the function performs its task

        //Since our function is also returning a value, we need to handle that as well.
        // There are a number of ways to do that.
        //1. cout can be used 
        //cout<<"Square of 4 is "<<square(4);
        //2. place the value in some variable
        int result = square(4);
        cout<<"Square of 4 is "<<result;
        /*
        if(!cin)
        {
            error("Something went wrong with the input \n");
        }
        */
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}

//Function Definition - what work the function acutally performs
int square(int x)
{
    //Body of the function

    return x*x;

}