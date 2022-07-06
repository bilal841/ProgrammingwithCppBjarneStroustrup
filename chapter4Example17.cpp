/*
Vectors Traversal
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
        /*
        cout<<"v[0]=="<<v[0]<<"\n"
            <<"v[1]=="<<v[1]<<"\n"
            <<"v[2]=="<<v[2]<<"\n";
        */
        //Since vector has a known size, we can use a loop to repeat the same operation on it a given number of times
        //Get the size of the vector by calling size() function of the vector object
        // Avoid accidental spilling past the vector range
        // Range of the vector [0:v.size()) - index starts from 0 and goes uptill length-1
        // First index is 0 and last index is v.size()-1
        cout<<"Via Traditional For Loop:\n";
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<"\n";
        }
        
        
        // You can also use a range for loop - 
        // for each element in a vector - do something
        cout<<"Via Range For Loop \n";
        for(int x : v)
        {
            cout<<x<<"\n";
        }
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