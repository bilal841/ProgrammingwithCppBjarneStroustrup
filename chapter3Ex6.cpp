//Arrange numbers entered by the user in a numerical sequence.
#include "std_lib_facilities.h"
int main()
{
    //3 Integers
    int n1, n2, n3;
    int largest=0, middle=0, smallest=0;

    try
    {
        
        cout<<"Enter three integers(Press Enter after each input)\n";
        cin>>n1>>n2>>n3;
        if(!cin)
        {
            error("Something's wrong with input \n");
        }
        cout<<"You entered "<<n1<<" "<<n2<<" "<<n3<<"\n";
        //Check the largest first - then decide between the remaining two
        // Larger of the remaining two will be the middle one .

        //For the possibility that n1 is the largest.
        if(n1 >= n2 && n1 >= n3)
        {
            largest = n1;
            //For the possibility that n1 >= n2 >= n3
            if(n2>=n3)
            {
                middle = n2;
                smallest = n3;
            }
            //For the possibility that n1 >= n3 >= n2
            else
            {
                middle = n3;
                smallest=n2;
            }
        }
        //For the possibility that n2 is the largest
        else if(n2 >= n1 && n2 >= n3)
        {
            largest = n2;
            //For the possibility that n2 >= n1 >= n3
            if(n1>=n3)
            {
                middle = n1;
                smallest = n3;
            }
            //For the possibility that n2 >= n3 >= n1
            else
            {
                middle = n3;
                smallest=n1;
            }
        }
        //For the possibility that n3 is the largest
        else if(n3 >= n1 && n3 >= n2)
        {
            largest = n3;
            //For the possibility that n3 >= n1 >= n2
            if(n1>=n2)
            {
                middle = n1;
                smallest = n2;
            }
            //For the possibility that n3 >= n2 >= n1
            else
            {
                middle = n2;
                smallest=n1;
            }
        }
        cout<<"Largest "<<largest<<"\n";
        cout<<"Middle "<<middle<<"\n";
        cout<<"Smallest "<<smallest<<"\n";
        cout<<largest<<" , "<<middle<<" , "<<smallest<<"\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
   
    return 0;
}