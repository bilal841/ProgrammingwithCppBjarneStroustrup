//Chapter 3 Drill

//Mistakes made:

#include "std_lib_facilities.h"
int main()
{
    // first_name is a variable of type string
    string sender_name = " ";
    string receiver_name = " " ;

    try
    {
        //Prompt to display on screen for the user
        cout<<"Please enter your first name(followed by 'enter'):";
        
        //read characters into the variable
        cin>>sender_name;
        
        //display the sender name
        cout<<"Hello,"<<sender_name<<"!\n"; 
        
        //prompt for the receiver name
        cout<<"Enter the name of the persion you want to write to: ";
        
        cin>>receiver_name;

        cout<<"Dear "<<receiver_name<<",\n";
        cout<<"\tHow are you ? I am fine. I miss you. I am writing this letter"
            <<" as the part of a book I am reading on Programming. It's an interesting"
            <<" book with a different perspective on introductory programming.\n";

        string friend_name = " ";
        cout<<"Enter the common friend's name: ";
        cin>>friend_name;

        cout<<"Have you seen "<<friend_name<<" lately?\n";

        char friend_sex= '0';
        
        cout<<"Enter the gender of the common friend(m for male, f for female): ";
        
        cin>>friend_sex;

        if(!cin)
        {
            error("Incorrect option for gender\n");
        }

        if(friend_sex == 'm')
        {
            cout<<"If you see "<<friend_name<<", please ask him to call me.\n";

        }

        if(friend_sex == 'f')
        {
            cout<<"If you see "<<friend_name<<", please ask her to call me.\n";

        }

        int recepient_age;
        cout<<"What is the age of the recepient(1-109): ";
        cin>>recepient_age;

        if(recepient_age <= 0 || recepient_age >= 110)
        {
            simple_error("You're kidding!");
        }

        if(recepient_age >0 && recepient_age < 110)
        {
            cout<<"I hear you just had a birthday and you are "<<recepient_age
            <<" years old.";
            
            if(recepient_age < 12)
            {
                cout<<"Next year you will be "<<recepient_age+1<<".";
            }

            if(recepient_age == 17)
            {
                cout<<"Next year you will be able to vote.";
            }

            if(recepient_age > 70)
            {
                cout<<"I hope you are enjoying retirement.";
            }
        }

        cout<<"\nYours sincerely,\n\n"<<sender_name;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}