/*
    Author : Bilal Nasir

    Problem Statement :
    Not a problem per se.
    Just a first example of a C program
    We are deviating from the normal "Hello, World" program
    as we intend to show quite a bit of C in this one program.

    Basically, the program stores and shows a bunch of floating point numbers 
    on the screen

*/
/* The program actually needs these two to look up the meaning and way of doing certain things*/
#include<stdio.h>
#include<stdlib.h>
/* This is the main thing that the program actually does*/
int main()
{
    //Declarations
    double A[5] =
    {
        [0] = 9.0,
        [1] = 2.9,
        [4] = 3.E+25,
        [3] = .00007,
    };

    //Doing some light work
    //Just showing the previously stored numbers on screen
    for(size_t i = 0; i < 5; ++i)
    {
        printf("element %zu is %g.,\t Square is %g\n",i,A[i],A[i]*A[i]);
    }

    //To keep the output on screen 
    printf("Press ~ to exit:");
    getchar();
    return 0;
}