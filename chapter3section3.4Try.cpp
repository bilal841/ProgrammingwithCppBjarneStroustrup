#include "std_lib_facilities.h"
int main()
{
    cout << "Please enter an integer value: ";
    int n;
    cin >> n;
    //double m;
    //m = n ;
    cout<< "n == " << n
        << "\nn+1 == " << n+1
        << "\nthree times n == " << 3*n
        << "\ntwice n == " << n+n
        << "\nn squared == " << n*n
        << "\nhalf of n == " << n/2
        << "\nsquare root of n - as int == " << sqrt(n)
        //<< "\nsquare root of m == " << sqrt(m)
        << "\nsquare root of n - as double == " << sqrt((double)n) // type conversion of int to double
        << '\n'; // name for newline (“end of line”) in output
    return 0;
}