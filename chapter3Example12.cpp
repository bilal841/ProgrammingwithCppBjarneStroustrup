//Valid and Invalid Names(aka Identifiers)
// Names for variables, functions , types etc.

#include "std_lib_facilities.h"
int main()
{
    // A C++ name contains only letters(A-Z,a-z), digits(0-9) and underscore(_).
    //Valid Variable names - Each variable must be of a single type.
    //Try to make the names unique

    int n;
    float weight_of_box;
    double Fourier_Transform;
    char Grade;
    bool Truth_Value;
    
    // Usually starts with a letter.
    // _ can be used in start - but not recommended.
    // No special symbols or space allowed in the name

    //Name can't start with a number
    // int 2x; 
    
    //$ is not a letter,digit, or underscore
    // float $Dollars;

    // space is not allowed
    //string Start menu;

    // Names are case sensitive

    //STRING s = "Goodbye!";
    //cOut<<S<<"\n";
    
    // Don't use reserve words i.e., keywords are names
    //int if = 7; // error: if is a keyword

    //Don't reuse common names
    
    //int string = 7; //not recommended - will lead to trouble later on

    // Choose meaningful names

    int mw;
    float vi;
    float vf;
    char giq;

    // Conventionally used names should be used as such.
     int i; // usually used as a loop counter
     int x; // Usually as a local variable or parameter

     //Don't use overtly long name. You'll thank yourself later
     
     //Rule of Thumb
     // If you get trired while writing it by hand,
     // you will get tired while typing it.

     float partial_sum; //probably ok
    int number_of_failing_students_in_section_A_of_12th_class; // way too long

    // Adopt a style and stick to it.
    // e.g, use _ for separating words in the name(identifier)
    int my_variable;
    int MyVariable;
    int myVariable;

    // All are OK. But different from each other. 

    //ALL CAPITALS are reserved for macros
    //Capitalize the initial letter of your own type 
    //to separate them for standard C++ types
    // int vs Square.

    //Don't use words can that are easy to mistype, misread or confuse.
    //e.g.,
    string Name, names, nameS;
    int foo, f00, fOO;
    float fl, f1, fi ;

    // C++ stores the values as bits in the memory
    // Meaning of bits is dependent of the type used to access it.
    // Similar to 12.5 , what does it denote?
    // Rs. 12.5 denontes currency, 12.5kg denotes the mass .

    // What potential problem can you see here?
    //Variable declared with one type can't be redeclared with another type.
    int var1;
    //char var1;
    char var2;
    var1 = 120;
    var2 = 'x';

    cout<<"var1 = "<<var1<<"\n";
    cout<<"var2 = "<<var2<<"\n";

    cout<<"var2 as var1 = "<<(int)var2<<"\n";
    cout<<"var1 as var2 = "<<(char)var1<<"\n";

    return 0;
}