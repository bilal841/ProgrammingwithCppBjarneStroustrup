#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
void error(string message);
int main()
{
    // produce the sum of the integers in "data.txt"
    ifstream is("num.txt");
    if (!is) error("data file missing");
    int sum = 0;
    int count = 0;
    int x;
    while(is>>x) { // read into x
    sum+=x;
    ++count;
    }
    cout<<"the sum of " <<count<< " elements is " << sum <<"\n";
    return 0;

}
void error(string message)
{
    cout<<message<<endl;
}
