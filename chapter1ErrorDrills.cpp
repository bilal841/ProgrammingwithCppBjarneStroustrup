//Error no. 1
// no include directive - compiler doesn't knows what "cout" is.
/*
 These special combinations of / and * are called multi-line comment aka Block Comment
 as oppose to // which can be used to comment a single line.
*/

/*
int main()
{
    cout<<"Hello, World!\n";
    return 0;
}
*/

//Error no. 2 
// Incorrect/misspelled name of header file

/*
#include "std_facilities.h"
int main()
{
    cout<<"Hello, World!\n";
    return 0;
}
*/

//Error no. 3
// Missing double quote for the string 

/*
#include "std_lib_facilities.h"
int main()
{
    cout<<"Hello, World!\n;
    return 0;
}
*/


//Error no. 4
// Incorrect type name - integer instead of int 

/*
#include "std_lib_facilities.h"
integer main()
{
    cout<<"Hello, World!\n";
    return 0;
}
*/

//Error no. 5
// use of worng operator ( < instead of << ) 

/*
#include "std_lib_facilities.h"
int main()
{
    cout<"Hello, World!\n";
    return 0;
}
*/

//Error no. 6
// Use of single quotes instead of double quotes.
//Gives a warning with mingw64 g++ 

/*
#include "std_lib_facilities.h"
int main()
{
    cout<<'Hello, World!\n';
    return 0;
}
*/

//Error no. 7 
// Missing semicolon, the statment terminator

/*
#include "std_lib_facilities.h"
int main()
{
    cout<<"Hello, World!\n"
    return 0;
}
*/

//Correct Program

#include "std_lib_facilities.h"
int main()
{
    cout<<"Hello, World!\n";
    return 0;
}