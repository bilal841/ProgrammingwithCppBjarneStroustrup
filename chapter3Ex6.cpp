//Arrange numbers entered by the user in a numerical sequence.
#include "std_lib_facilities.h"
int main()
{
    //3 Integers
    int n1, n2, n3;

    cout<<"Enter three integers(Press Enter after each input)\n";
    cin>>n1>>n2>>n3;

    cout<<"You entered "<<n1<<" "<<n2<<" "<<n3<<"\n";

    int largest=0, middle=0, smallest=0;

    if(n1 > n2 && n2 > n3)
    {
        largest = n1;
        middle = n2;
        smallest = n3;
    }
    else if(n1 > n3 && n3 > n2)
    {
        largest = n1;
        middle = n3;
        smallest = n2;
    }


    cout<<"Largest "<<largest<<"\n";
    cout<<"Middle "<<middle<<"\n";
    cout<<"Smallest "<<smallest<<"\n";
    return 0;
}