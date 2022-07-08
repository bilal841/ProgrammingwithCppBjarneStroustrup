//Safe Conversions
//Converting up from smaller into larger data types is probably OK
//Converting down from larger into smaller data types is not type safe
#include "std_lib_facilities.h"
int main()
{
    try
    {
         char c = 'x';
        // value is always converted to an equal value or approx of equal value
        int i1 = c;
        int i2 = 'x';

        char c2 = i1; 

        cout << c << ' ' << i1 << ' ' << c2 << '\n';

        double d1 = -2.3;
        double d2 = d1 + 2; // 2 is converted to 2.0 before addition

        if (d1 < 0) // 0 is converted to 0.0 before comparison
        {
            cout<<"d1 is negative \n";
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}