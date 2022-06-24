// Data type or Type of the variable determines:
// 1. Value stored in the variable
// 2. Operations that can be performed on those values

#include "std_lib_facilities.h"
int main()
{
    //create and read an integer into a variable named count
    int count;
    cout<<"Enter count:";
    cin>>count;
    //create and read a string into a variable named "name"
    string name;
    cout<<"Enter your first name:";
    cin>>name;

    // + adds integers
    int c2 = count + 2;
    //Display the new value of c2
    cout<<count<<" + 2 = "<<c2<<"\n";
    // + appends strinbgs;
    string s2 = name + " Jr.";
    //Display the new value of name
    cout<<name<<" + Jr. = "<<s2<<"\n";

    // - subtracts integer
    int c3 = count - 2;
    //display the value of c3
    cout<<count<<" - 2 = "<<c3<<"\n";
    // error : - is not defined for string (though you can overload?)
    //string s3 = name - "Jr.";

    //perfectly legal operations which might look absurd

    int age = -100; //In real world, age can't be negative.
    // But the above statement is perfectly legal in C++ or programming
    

    return 0;
}