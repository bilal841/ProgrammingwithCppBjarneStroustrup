/*
    Author : Bilal Nasir
    Chapter 4 Exercise 10 
    
    Problem Statement

    Write a program that plays the game “Rock, Paper, Scissors.” If you are not
    familiar with the game do some research (e.g., on the web using Google).
    Research is a common task for programmers. Use a switch-statement to
    solve this exercise. Also, the machine should give random answers (i.e.,
    select the next rock, paper, or scissors randomly). Real randomness is too
    hard to provide just now, so just build a vector with a sequence of values
    to be used as “the next value.” If you build the vector into the program,
    it will always play the same game, so maybe you should let the user enter some values.
    Try variations to make it less easy for the user to guess
    which move the machine will make next.

    
    Strategy:
    Develop this game as a class project ?????
    
*/
#include "std_lib_facilities.h"
#include<time.h>

int get_random()
{
    srand(time(0));
    int random_number = 0;
    random_number = rand() % 3 + 1;
    return random_number;
}

string computer_try()
{
    
    string comp_try = "";

    int random = get_random();

    switch(random)
    {
        case 1:
            comp_try = "rock";
            break;
        case 2:
            comp_try = "paper";
            break;
        case 3:
            comp_try = "scissors";
            break;
        default:
            comp_try = "";
            break;
    }
    return comp_try;

}
int main()
{
    try
    {
        int player_try = 0 ;
        srand(time(0));
        string player = "";
        cout<<"rock, paper, scissors:\n\n";
        while(cin>>player)
        {
            int computer_turn = 0 ;
            computer_turn = rand() % 3 + 1;
            cout<<"Computer Turn "<<computer_try()<<"\n";
        }
        // if(!cin)
        // {
        //     error("Something went wrong with the input \n");
        // }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}