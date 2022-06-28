//Count the "monies"
//assume the user knows the money is always a +ve number - never negative
#include "std_lib_facilities.h"
int main()
{
    try
    {
        int pennies = 0;
        int nickels = 0;
        int dimes = 0;
        int quarters =0 ;
        int  half_dollars =0 ;
        int one_dollars = 0 ;
        int total_cent = 0;
        double dollar_amount = 0.0;

        cout<<"Bean Counter\n\n";
        
        cout<<"Enter number of pennies(1-cent coins) you have: ";
        cin>>pennies;

        cout<<"Enter number of nickels(5-cent coins) you have: ";
        cin>>nickels;

        cout<<"Enter number of dimes(10-cent coins) you have: ";
        cin>>dimes;

        cout<<"Enter number of quarters(25-cent coins) you have: ";
        cin>>quarters;

        cout<<"Enter number of half dollars(50-cent coins) you have: ";
        cin>>half_dollars;

        cout<<"Enter number of one-dollars(100-cent coins) you have: ";
        cin>>one_dollars;
        
        if(!cin)
        {
            error("Something went wrong with the input \n");
        }
        
        total_cent += pennies * 1;
        total_cent += nickels * 5;
        total_cent += dimes * 10;
        total_cent += quarters * 25;
        total_cent += half_dollars * 50;
        total_cent += one_dollars * 100;

        dollar_amount = (double)total_cent / 100.0; 

        if(pennies == 1)
        {
            cout<<"You have "<<pennies<<" penny.\n";
        }
        else
        {
            cout<<"You have "<<pennies<<" pennies.\n";
        }
        if(nickels == 1)
        {
            cout<<"You have "<<nickels<<" nickel.\n";
        }
        else
        {
            cout<<"You have "<<nickels<<" nickels.\n";
        }
        if(dimes>0 && dimes<2)
        {
            cout<<"You have "<<dimes<<" dime.\n";
        }
        else
        {
            cout<<"You have "<<dimes<<" dimes.\n";
        }
        if(quarters>0 && quarters<2)
        {
            cout<<"You have "<<quarters<<" quarter.\n";
        }
        else
        {
            cout<<"You have "<<quarters<<" quarters.\n";
        }
        if(half_dollars>0 && half_dollars<2)
        {
            cout<<"You have "<<half_dollars<<" half_dollar.\n";
        }
        else
        {
            cout<<"You have "<<half_dollars<<" half_dollars.\n";
        }
        if(one_dollars>0 && one_dollars<2)
        {
            cout<<"You have "<<one_dollars<<" one_dollar.\n";
        }
        else
        {
            cout<<"You have "<<one_dollars<<" one_dollars.\n";
        }

        if(total_cent>=0 && total_cent<2)
        {
            cout<<"Value of all your coins is "<<total_cent<<" cent.\n";
        }
        else
        {
            cout<<"Value of all your coins is "<<total_cent<<" cents.\n";
        }
        
        cout<<"$"<<dollar_amount<<"\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}