#include<iostream>
using namespace std;
int main()
{
	cout<<"Prime-Composite"<<endl<<endl;
	cout<<"Starting Number : 1"<<endl;
	cout<<"Ending Number: 100"<<endl;
	int n,j;
	int prime; 
	for(n=1;n<=1000;n++)
	{
		prime = 1;
		for(j=2;j<n/2;j++)
		{
			if(n%j==0)
			{
				prime = 0 ;
				break;
			}
		}
		if(prime==1)
		{
			cout<<n<<"\t Prime"<<endl;
		}
		else
		{
			cout<<n<<"\t Composite"<<endl;
		}
	}
	
	return 0;
}
