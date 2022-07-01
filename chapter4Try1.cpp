//Write a program that converts yen('y'), kroner('k'), and pounds('p') into US Dollars('$').
//Conversion Rate as of 1st July, 2022.
/*
    1 $ = 135.08 (y)en
    1 $ = 9.91 (k)roner
    1 $ = 0.82 (p)ound

*/
#include "std_lib_facilities.h"
int main()
{
    try
    {
        //declare variable and constants for respective currencies
        //keep type safety in mind
        double currency_amount = 1;

        //conversion rates
        double dollar_to_yen = 135.08;
        double dollar_to_kroner = 9.91 ;
        double dollar_to_pound = 0.82 ;
        //currency unit

        char currency_unit = 0;

        cout<<"Currency Converter\n\n";
        cout<<"Enter your currency amount followed by symbol y-yen , k-kroner, and p-pound:\n";
        cin>>currency_amount>>currency_unit;

        //check the unit and perform appropriate conversion
        if(currency_unit == 'y')
        {
            cout<<currency_amount<<" yen =="<<currency_amount/135.08<<" dollars"<<"\n";
        }
        else if(currency_unit == 'k')
        {
             cout<<currency_amount<<" kroner =="<<currency_amount/9.91<<" dollars"<<"\n";
        }
        else if(currency_unit == 'p')
        {
             cout<<currency_amount<<" pound =="<<currency_amount/0.82<<" dollars"<<"\n";
        }
        else
        {
            cout<<"Sorry , unkown currency unit\n";
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