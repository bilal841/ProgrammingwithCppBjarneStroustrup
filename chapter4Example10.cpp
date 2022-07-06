#include "std_lib_facilities.h"
int main()
{
    try
    {
        // define alternatives:
        int y = 'y'; // this is going to cause trouble
        constexpr char n = 'n';
        constexpr char m = '?';
        cout << "Do you like fish?\n";
        char a;
        cin >> a;
        if(!cin)
        {
            error("Something went wrong with the input \n");
        }
        switch (a)
        {
            case n:
            // . . .
            break;
            case y: // error: variable in case label
            // . . .
            break;
            case m:
            // . . .
            break;
            case 'n': // error: duplicate case label (n’s value is ‘n’)
            // . . .
            break;
            default:
            // . . .
            break;
        }
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}