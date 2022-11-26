#include<iostream>
using namespace std;

int main()
{
	int number;
	cout<<"Enter an Integer "<<endl;
	cin>>number;

	int sum=0;
	int i=1;//i will add 1 if the number is prime
	while(i<=number)
	{
		if(number%i==0)
		{
			sum+=1;
		}
		
	i++;
	}
	// when the number is prime it will add 1 into sum 
	// when a sum=2 then the number will be prime 
	if(!(sum==2))// here (!) is used as not it means sum is not equal to 2 
	{
		cout<<"Integer is not Prime "<<endl;	
	}
	else 
	{
		cout<<"Integer is Prime "<<endl;
	}
return 0;
}

