//Variable names in Urdu ???
#include "std_lib_facilities.h"
int main()
{
    try
    {
        //Try first iteration of program in english to show that it works
        //2nd iteration with variable names in Urdu 
        //string name = "";
        string نام = "";
        
        //cout<<"Enter your name: ";
        //cin>>name;

        cout<<"Enter your name: ";
        //cout<<"آم کا اسم گرامی کیا ہے ؟";
        cin>>نام ;
        
        if(!cin)
        {
            error("Something went wrong with the input \n");
        }
        //cout<<"Hello, "<<name<<"!\n";
        cout<<"Hello, "<<نام<<"!\n";
        //cout<<"اسلام علیکم , "<<نام<<"!\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //char ch;
    //cin>>ch;
    return 0;
}