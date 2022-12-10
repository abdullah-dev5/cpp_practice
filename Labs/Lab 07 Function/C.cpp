#include<iostream>
#include<cmath>
using namespace std;

int greaterValue(int no1, int no2)
	{
		if (no1>no2)
		{
			return no1;
		}
		else
		{
			return no2;
		}
	}


int main()
{
	int num1,num2;
	cout<<"Enter a Number "<<endl;
	cin>>num1;
	cout<<"Enter another Number "<<endl;
	cin>>num2;
		
		cout<<"The Greater value is "<<greaterValue(num1,num2);


	return 0;
}


