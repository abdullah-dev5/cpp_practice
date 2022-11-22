// The Function is call by reference ..
//this Fn will change the outcome..
//overcome the intial value with the final (f fn values)
#include<iostream>
using namespace std;

int f(int & a );

	int main()
	{
		int a=100;
	//we call the function before the cout statement b/c it will change the value of 
	// variable 
		f(a);
		cout<<endl;
		cout<< "before the f function "<< a <<endl;


	return 0;
	}

	int f(int  & x )
	{
		x=x*20;
		cout<< "Inside the f function "<< x;
		return x;
	}

