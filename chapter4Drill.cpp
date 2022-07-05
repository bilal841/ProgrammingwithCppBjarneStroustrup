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
        
        while(cin>>n1>>n2)
        {
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
            cout<<"Input two integers : ";
        }
        
        
        */
       /*
       //Step 3
        int n1 = 0;
        int n2 = 0;
        cout<<"Input two integers : ";
        
        while(cin>>n1>>n2)
        {
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
            cout<<"Input two integers : ";
        }

        */
       /*
       //Step 4
        double n1 = 0;
        double n2 = 0;
        cout<<"Input two Floating point values : ";
        while(cin>>n1>>n2)
        {
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
            cout<<"Input two integers : ";
        }
        */
       //Step 5
       /*
        double n1 = 0;
        double n2 = 0;
        double difference = 0;
        cout<<"Input two Floating point values : ";
        cout<<"Input two Floating point values : ";
        while(cin>>n1>>n2)
        {

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
        }
        */
       /*
        //Step 6
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
        */
       
       //Step 7
       //Step 8
        double length = 0;
        double current_smallest = 299792458 ;
        double current_largest = -299792458 ;
        string unit = "";

        cout<<"Input a length with unit (cm, m, in, ft)\nInput Ctrl+Z+Enter to exit\n";
        while(cin>>length>>unit)
        {
            
            // if the unit is any thing else - indicate as such
            if(unit !="cm" && unit !="m" && unit != "in" && unit !="ft" )
            {
                  cout<<"Illegal Units\n";
            }
            //check the unit and perform appropriate conversion
            else
            {
                if(unit == "cm")
                {
                    cout<<length/100.0<<" m\n"
                        <<length/2.54<<" in\n"
                        <<length/2.54/12.0<<" ft\n";
                }
                else if (unit == "m")
                {
                    cout<<length*100<<" cm\n"
                        <<length*100/2.54<<" in\n"
                        <<length*100/2.54/12.0<<" ft\n";
                
                }
                else if (unit == "in")
                {
                    cout<<length*2.54<<" cm\n"
                        <<length*2.54/100<<" m\n"
                        <<length/12.0<<" ft\n";
                }
                else if (unit == "ft")
                {
                    cout<<length*12.0*2.54<<" cm\n"
                        <<length*12.0*2.54/100.0<<" m\n"
                        <<length*12.0<<" in\n";
                }
                /* - not needed in this step as the units are different
                if(length<current_smallest)
                {
                    current_smallest = length;
                    cout<<current_smallest<<unit<<" smallest so far.\n";
                }
                if(length>current_largest)
                {
                    current_largest = length;
                    cout<<current_largest<<unit<<" largest so far.\n";
                }
                */
                cout<<"Input a length with unit (cm, m, in, ft)\nInput Ctrl+Z+Enter to exit\n";
            }
            
        }

        //Step 9 -
        // Keep track of th sum of values
        // Largest and Smallest of the values
        // Common unit - meters
        //Step 10
        // Step 11

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}