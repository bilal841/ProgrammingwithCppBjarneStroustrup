//Switch Technicalities
// 1. Switch can only be made on the basis of integer, char or enumeration.
// You can't switch on a string.
#include "std_lib_facilities.h"
int main()
{
    try
    {
        int n;
        char ch;
        string s;

        /*
        cout<<"Enter an integer(1-3): ";
        cin>>n;

         cout<<"Enter a grade(A/B/C/D/F): ";
        cin>>s;
        
        */
        cout<<"Enter a grade(A,a,B,b,C,c,D,d,F,f): ";
        cin>>ch;
        
        if(!cin)
        {
            error("Something went wrong with the input \n");
        }
        // Check which integer is entered and display "One" for 1 , "Two" for 2 , "Three" for 3
        /*
        switch (n)
        {
        case 1:
            // if the expression(i.e.,n) matches the respective constant(1) - Display "One"
            cout<<"One \n";
            break;
        // repeat for 2 and 3
        case 2:
                cout<<"Two \n";
                break;
        case 3:
                cout<<"Three \n";
                break;
        default:
                cout<<"Not in range(1-3)\n";
            break;
        }
        */
       
       /* Check to see what the grade is
        A - Excellent
        B - Good
        C - Average
        D - Poor
        F - Fail
       */
       switch (ch)
        {
        case 'A':
        case 'a':
            // if the expression(i.e.,ch) matches the respective constant('A') - Display "Excellent"
            cout<<"Excellent \n";
            break;

        case 'B':
        case 'b':
            // if the expression(i.e.,ch) matches the respective constant('B') - Display "Good"
            cout<<"Good \n";
            break;

        case 'C':
        case 'c':
            // if the expression(i.e.,ch) matches the respective constant('C') - Display "Average"
            cout<<"Average \n";
            break;

        case 'D':
        case 'd':
            // if the expression(i.e.,ch) matches the respective constant('D) - Display "Poor"
            cout<<"Poor \n";
            break;

        case 'F':
        case 'f':
            // if the expression(i.e.,ch) matches the respective constant('E') - Display "Fail"
            cout<<"Fail \n";
            break;

        default:
                cout<<"Not a valid grade letter.\n";
            break;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}