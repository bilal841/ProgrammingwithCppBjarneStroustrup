/*
Growing a vector
*/
#include "std_lib_facilities.h"
int main()
{
    try
    {
        //Declare and initialize a vector
        //vector<type> vector_name={val1,val2,val3,...};
        //vector<type> vector_name; // initialized to empty - no elements
        //vector of 5 ints


        vector<int> v;
    
        v.push_back(1); // add an element with the value 1 at the end "back" of v 
        // v has 1 element now - v[0]

        v.push_back(2); // add an element with the value 2 at the end "back" of v 
        // v has 2 elements now - v[0] and v[1]

        v.push_back(3); // add an element with the value 1 at the end "back" of v 
        // v has 3 element now - v[0], v[1], and v[2]
        /*
        if(!cin)
        {
            error("Something went wrong with the input \n");
        }
        */
        
        
        // You can also use a range for loop - 
        // for each element in a vector - do something
        cout<<"Via Range For Loop \n";
        for(int x : v)
        {
            cout<<x<<"\n";
        }
      
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}