#include<iostream>
#include <cmath>
using namespace std;


/* this programm is alternative of using display or cout in main we can use viod (which does not return 
value)   instead of main body for output*/

double mypower(double base,int exponent)
{ 
	float results;
	/*results=1;
	for (int i=1; i<=exponent; i++)
	{
		results=results*base;
	}*/	
	 //we can also use 
	 results=pow(base,exponent);
	
	//instead of loop
	
	return results;
}

void print_pow(double base, int exponent)
{
	
	cout<<base<<" raised to power "<<exponent<<" is "<<mypower(base,exponent)<<endl;
	
}



int main()
{
int exponent;
float base;
	 cout<<"Enter a base "<<endl;
	 cin>>base;
	cout<<"Enter a exponent "<<endl;
	cin>>exponent;

	print_pow(base,exponent);

	/*we can call aprint function multiple times , it will provide many times output with single
	or  without more than one cout statement */
	// here are the examples , 
	//print_pow(4,3);
	//print_pow(9,2);
return 0;
}

