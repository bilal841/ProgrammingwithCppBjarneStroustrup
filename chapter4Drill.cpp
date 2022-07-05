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
       /*
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
        */
       //Step 5
       /*
        double n1 = 0;
        double n2 = 0;
        double difference = 0;
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
        //calculate the absolute value of the difference and see if the numbers
        // are within 0.01 of each other
        difference = abs(n1-n2);
        cout<<"Difference: "<<difference<<"\n";
        if(difference <= 0.01)
        {
            cout<<"The numbers are almost equal.\n";
        }
        */
        //Step 1
        double n1 = 0;
        double current_smallest = 299792458 ;
        double current_largest = -299792458 ;
        cout<<"Input a floating point value - Input | to exit:";
        while(cin>>n1)
        {
            if(n1<current_smallest)
            {
                current_smallest = n1;
                cout<<current_smallest<<" smallest so far.\n";
            }

            if(n1>current_largest)
            {
                current_largest = n1;
                cout<<current_largest<<" largest so far.\n";
            }
          cout<<"Input a floating point value - Input | to exit:";
        }

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}