#include "std_lib_facilities.h"
int main()
{
    try
    {
        cout << "Please enter an integer value: ";
        int n;
        cin >> n;
        //double m;
        //m = n ;
        if(!cin)
        {
            error("Something went wrong with the input \n");
        }
        cout<< "n == " << n
            << "\nn+1 == " << n+1
            << "\nthree times n == " << 3*n
            << "\ntwice n == " << n+n
            << "\nn squared == " << n*n
            << "\nhalf of n == " << n/2
            << "\nsquare root of n - as int == " << sqrt(n)
            //<< "\nsquare root of m == " << sqrt(m)
            // type conversion of int to double
            << "\nsquare root of n - as double == " << sqrt((double)n) 
            << "\n" // name for newline (“end of line”) in output
            <<"n % 2 == "<<n%2;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
   
    return 0;
}