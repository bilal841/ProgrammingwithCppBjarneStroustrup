#include "std_lib_facilities.h"
int main()
{
    try
    {
        /*
        //Step 1
        int n1 = 0;
        int n2 = 0;
        cout<<"Input two integers - Input | to exit:";
        while(cin>>n1>>n2)
        {
          cout<<n1<<" "<<n2<<"\n";
          cout<<"Input two integers - Input | to exit:";
        }
        if(!cin)
        {
            error("Terminating Program \n");
        }*/
        /*
        //Step 2
        int n1 = 0;
        int n2 = 0;
        cout<<"Input two integers : ";
        cin>>n1>>n2;
        
        if(!cin)
        {
            error("Something's wrong with input.\n");
        }

        if(n1<n2)
        {
            cout<<"The smaller value is : "<<n1<<"\n";
            cout<<"The larger value is : "<<n2<<"\n";
        }
        else if(n2<n1)
        {
            cout<<"The smaller value is : "<<n2<<"\n";
            cout<<"The larger value is : "<<n1<<"\n";
        }
        */
       /*
       //Step 3
        int n1 = 0;
        int n2 = 0;
        cout<<"Input two integers : ";
        cin>>n1>>n2;
        
        if(!cin)
        {
            error("Something's wrong with input.\n");
        }

        if(n1<n2)
        {
            cout<<"The smaller value is : "<<n1<<"\n";
            cout<<"The larger value is : "<<n2<<"\n";
        }
        else if(n2<n1)
        {
            cout<<"The smaller value is : "<<n2<<"\n";
            cout<<"The larger value is : "<<n1<<"\n";
        }
        else
        {
            cout<<"The numbers are equal.\n";
        }
        */
       //Step 4
        double n1 = 0;
        double n2 = 0;
        cout<<"Input two Floating point values : ";
        cin>>n1>>n2;
        
        if(!cin)
        {
            error("Something's wrong with input.\n");
        }

        if(n1<n2)
        {
            cout<<"The smaller value is : "<<n1<<"\n";
            cout<<"The larger value is : "<<n2<<"\n";
        }
        else if(n2<n1)
        {
            cout<<"The smaller value is : "<<n2<<"\n";
            cout<<"The larger value is : "<<n1<<"\n";
        }
        else
        {
            cout<<"The numbers are equal.\n";
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}