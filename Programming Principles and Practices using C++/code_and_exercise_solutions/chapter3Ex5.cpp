//Comparison of integers

#include "std_lib_facilities.h"
int main()
{
    //Declare both variable in a single statement
    //int val1,val2;
    // or alternatively declare each variable in a separate statement
    double val1;
    double val2;
    
    try
    {
        cout<<"Enter a floating-point number: ";
        cin>>val1;
        
        cout<<"Enter another floating-point number: ";
        cin>>val2;

        if(!cin)
        {
            error("Check inputs \n");
        }
        
        double smaller, larger, sum, difference, product;
        
        double ratio;

        sum = val1 + val2;
        cout<<"Sum == "<<sum<<"\n";
        
        //abs() - gives the absolute value of difference.
        difference = abs(val1 - val2);
        cout<<"Difference == "<<difference<<"\n";

        product = val1 * val2;
        cout<<"Product == "<<product<<"\n";

        // Check which value is larger/smaller and assign respectively
        if(val1 > val2)
        {
            larger = val1;
            smaller = val2;
            // convert to double to avoid integer division
            ratio = val2 / val1;
        }

        if(val2 > val1)
        {
            larger = val2;
            smaller = val1;
            // convert to double to avoid integer division
            ratio = val2 / val1; 
        }
        
        if(val1 == val2)
        {
            cout<<val1<<" == "<<val2<<"\n";
            larger = smaller = val1;
            ratio = val1 / val2;
        }
        cout<<"Larger == "<<larger<<"\n";
        cout<<"Smaller == "<<smaller<<"\n";
        cout<<"Ratio == "<<ratio<<"\n";
        cout<<"Ratio == "<<smaller<<":"<<larger<<"\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}