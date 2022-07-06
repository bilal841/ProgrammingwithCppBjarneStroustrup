/*
    Chapter 4 Exercise 3 - Route Checking 

    Program that reads and stores the distance between two cities
    along different routs.
    Find the combined length of all the routes.
    Find the routes with minimum and maximum distances.
    
    Strategy:
    Read and store the distances as doubles into a vector.
    Sum all the values in the vectors for the combined length of the routes.
    Sort the vector :
         First element would be the length of the smallest route between the cities.
         Last element would be the length of the maximum route between the cities. 

*/
#include "std_lib_facilities.h"
int main()
{
    try
    {
        // vector to hold length of various routes
        // Floating point values - each value represent the length in kilometers.

        vector <double> routes;
        //read the temperature values from the console and store in the vector
        cout<<"Enter length of the various routes(km) between Multan and Lahore"
            <<"- separated by space.\n";
        cout<<"Enter | or Ctrl+Z for input end\n";
        for(double route;cin>>route;)
        {
            //place the value read into the vector
            routes.push_back(route);
            //Contine doing this till the user enter a value that is not a double.
            //some special symbol like |
        }
        
        //compute the combined length of all routes
        double sum = 0;
        for (double route:routes)
        {
            sum += route;
        }
        cout<<"Combined Length of all routes: "<<sum<<" km.\n";

        //For finding the minimum and maximum length route

        //we need to sort the values
        //standard libray algorithm
        sort(routes);
        //From the sorted vector of routes:
        //1st element - represents the smallest route
        cout<<"Smallest route between Multan and Lahore is "<<routes[0]<<" km long.\n";
        //Last element - represents the largest route
        // as size() returns the length of the vector . Subtracting one will
        // give the index of the last element
        cout<<"Smallest route between Multan and Lahore is "<<routes[routes.size()-1]<<" km long.\n";
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}