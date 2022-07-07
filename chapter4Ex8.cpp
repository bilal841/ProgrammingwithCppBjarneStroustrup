/*
    Author : Bilal Nasir

    Chapter 4 Exercise 8 
    
    Problem Statement:

    There is an old story that the emperor wanted to thank the inventor of
    the game of chess and asked the inventor to name his reward.
    The inventor asked for one grain of rice for the first square, 2 for the second, 4 for
    the third, and so on, doubling for each of the 64 squares. That may sound
    modest, but there wasn’t that much rice in the empire!
    
    Write a program to
    calculate how many squares are required to give the inventor at least 1000
    grains of rice, at least 1,000,000 grains, and at least 1,000,000,000 grains.
    
    Strategy:

     You’ll need a loop, of course, and probably an int to keep track of which
    square you are at, an int to keep the number of grains on the current
    square, and an int to keep track of the grains on all previous squares. We
    suggest that you write out the value of all your variables for each iteration
    of the loop so that you can see what’s going on.

    Treat the number of rice grain on each square as 2 ^ index of the square
    where index starts from 0 - i.e., first square will have 2^0 = 1 grain
    second squae will have 2^1 = 2 grains
    third square will have 2^2 = 4 grains 
    and so on .
    
    
*/
#include "std_lib_facilities.h"
int main()
{
    try
    {
        int square_index = 0;
        int square_grains = 0;
        int total_grains = 0;
        int grains_to_be_awarded = 0;

        cout<<"Enter the number of grains to be awarded to the inventor of chess:";
        while(cin>> grains_to_be_awarded)
        {
            for(square_index=0,total_grains=0; total_grains <= grains_to_be_awarded; ++square_index)
            {
                square_grains = pow(2,square_index);
                cout<<"Square "<<square_index+1<<" Grains == "<<square_grains<<"\n"; 
                total_grains += square_grains ;
                cout<<"Total Grains awarded so far == "<<total_grains<<"\n";
            }
            cout<<"Square needed to award "<<grains_to_be_awarded<< " grains == "<<square_index<<".\n";
            cout<<"Enter the number of grains to be awarded to the inventor of chess:";

        }

        if(!cin)
        {
            error("Incorrect Input or Delibrate Exit\n");
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}