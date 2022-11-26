#include<iostream>
using namespace std;
int main()
{
int num;
	cout<<"Enter a number to check Prime or Not  ";	
	cin>>num;
	
	bool isprime=true;
	//
	for (int i=2; i<num; i++ )
	{
	
		if(num%i==0)
			{	isprime=false;}
	}
	if(isprime==0)
	{
		cout<<" Not Prime "<<endl;
	}
	else 
	{
		cout<<" Prime "<<endl;
	}
	
	
return 0;
}

