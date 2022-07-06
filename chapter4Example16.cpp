/*
Vectors - Sequence of elements that can be accessed by index
usef for storing a collection of data.

Similar to array concept
e.g., vectors can be grown in size at run time more easily than arrays
*/
#include "std_lib_facilities.h"
int main()
{
    try
    {
        //Declare and initialize a vector
        //vector<type> vector_name={val1,val2,val3,...};
        //vector of 5 ints

        vector<int> v = {1,2,3,4,5};

        //Elements of a vector can be access by the index  - Indexing starts at 0

        cout<<"v[0]=="<<v[0]<<"\n"
            <<"v[1]=="<<v[1]<<"\n"
            <<"v[2]=="<<v[2]<<"\n";

        v[0] += 20;

        cout<<"Changed "<<v[0]<<"\n";

        //We can also define a vector of given size without specifying the element values
        vector<int> v1(6) ; // Declare a vector of 6 ints - initialized to 0
        cout<<"v1[0]=="<<v1[0]<<"\n"
            <<"v1[1]=="<<v1[1]<<"\n"
            <<"v1[2]=="<<v1[2]<<"\n";
        // Vectors can be declared of any of the available types in C++
        //a vector of string
        vector<string> scientists={"Knuth, Hinton, Shannon"};
        //a vector of doubles
        vector<double> blood_hg = {12.1,11.3,14.7};

        // Accessing a non-existent element will result in run-time error
        scientists[3] = "Andrew";

        
        /*
        if(!cin)
        {
            error("Something went wrong with the input \n");
        }
        */
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}