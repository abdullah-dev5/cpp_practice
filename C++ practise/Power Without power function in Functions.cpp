#include<iostream>
#include <cmath>
using namespace std;


// this programm is alternative of pre-defined function of power
  
double mypower(int base,int exponent)
{ 
	int results=1;
	for (int i=1; i<=exponent; i++)
	{
		results=results*base;
	}	
	// we can also use results=pow(base,exponent);
	//instead of loop
	
	return results;
}


int main()
{
int exponent,base;
	 cout<<"Enter a base "<<endl;
	 cin>>base;
	cout<<"Enter a exponent "<<endl;
	cin>>exponent;

	cout<<"The results is "<<mypower(base,exponent);

return 0;
}

