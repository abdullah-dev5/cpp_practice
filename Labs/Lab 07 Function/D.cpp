#include<iostream>
#include<cmath>
using namespace std;

bool odd_even(int no)
	{
		if (no%2==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}


int main()
{
	int num;
	cout<<"Enter a Number "<<endl;
	cin>>num;
	
	if ((odd_even(num))==1)
		{
			cout<<"Number is Even";
		}
	else
		{
		cout<<"Number is Odd"<<endl;	
			
		}
		
		
		
		return 0;
}


