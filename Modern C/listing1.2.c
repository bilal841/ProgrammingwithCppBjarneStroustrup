/*
    Author : Bilal Nasir

    Problem Statement :
    Not a problem per se.
    
    Just a first example of a badly written C program
    
    Basically, the program is supposed to store and show a bunch of floating point numbers 
    on the screen

*/
/* The program actually needs these two to look up the meaning and way of doing certain things
We are removing them for the time being with C++ style comments
*/

#include<stdio.h>
//#include<stdlib.h>
/* This is the main thing that the program actually does*/

/*
int main()
converting int main() to void main()
meaning that the main is not expected to return an integer value
*/
//void main()
int main()
{
    //Declarations
    /*double A[5] =
    {
        [0] = 9.0,
        [1] = 2.9,
        [4] = 3.E+25,
        [3] = .00007,
    };*/
    int i;
    double A[5] =
    {
        9.0,
        2.9,
        3.E+25,
        .00007,
    };

    //Doing some light work
    //Just showing the previously stored numbers on screen
    for(i = 0; i < 5; ++i)
    {
        printf("element %d is %g.,\t Square is %g\n",i,A[i],A[i]*A[i]);
    }

    //To keep the output on screen 
    printf("Press ~ to exit:");
    getchar();
    return 0;
}