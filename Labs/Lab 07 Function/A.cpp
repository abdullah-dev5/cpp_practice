#include<iostream>
#include<cmath>
using namespace std;

int multi(int num1,int num2)
	{
		return num1*num2;
	}
	
int subst(int num1,int num2)
	{
		return num1-num2;
	}
	
float division(int num1,int num2)
	{		
		return num1/(float)num2;
	}
	
int remind(int num1,int num2)
	{
		return num1%num2;
	}


int main()
{
	int no1,no2;
		cout<<"Enter a Number "<<endl;
		cin>>no1;
		cout<<"Enter another Number "<<endl;
		cin>>no2;
		
		cout<<"The substration of  the numbers is  "<<subst(no1,no2)<<endl;
		cout<<"The Multiplication of  the numbers is  "<<multi(no1,no2)<<endl;
		cout<<"The Division of  the numbers is  "<<division(no1,no2)<<endl;
		cout<<"The Reminder  of  the numbers is  "<<remind(no1,no2)<<endl;
		 
		

	return 0;
}


