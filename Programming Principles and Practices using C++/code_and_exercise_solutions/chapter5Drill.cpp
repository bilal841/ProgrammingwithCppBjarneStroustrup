#include "std_lib_facilities.h"
int main()
{
    try
    {
        //1. Syntax error - Cout - cout
        //Cout<<"Success!\n";
        //cout<<"Success!\n";
        
        //2. Syntax Error - ending " not added
        //cout<<"Success!\n;
        //cout<<"Success!\n";
        
        //# Error Type - 
        //error statment
        // correct statement

        //3 Syntax Error - Missing semicolon ; 
        //cout<<"Success"<<"!\n"
        cout<<"Success"<<"!\n";
        
        

        keep_window_open();
        return 0;
    }
    catch(exception& e)
    {
        cerr << "error: "<< e.what() << '\n';
        keep_window_open();
        return 1;
    }
    /*catch()
    {
        cerr<<"Oops: Unknown Exception!\n";
        keep_window_open();
        return 2;
    }
    */
    
}