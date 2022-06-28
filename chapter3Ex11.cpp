//Count the "monies"
#include "std_lib_facilities.h"
int main()
{
    try
    {
        int pennies,nickles,dimes, quarters, half_dollars, total_amount;
        cout<<"Bean Counter\n\n";
        cout<<"Enter number of pennies(1-cent coins) you have: ";
        cin>>pennies;
        
        if(pennies>=0 && pennies<2)
        {
            cout<<"You have "<<pennies<<" penny.\n";
        }
        else
        {
            cout<<"You have "<<pennies<<" pennies.\n";
        }

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