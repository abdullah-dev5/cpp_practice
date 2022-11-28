#include<iostream>
using namespace std;
int prime(int a)
{
	int j,i=1,sum=0;
	while(i<=a)
	{
		j=a%i;
		if(j==0)
		{
			sum+=1;	}
			i++;
			}
			if(sum==2)
			{
				cout<<"The number is prime\n";
				
			}
			else
			
		{
			cout<<"The number is not prime\n";
	
		}
		
	
}
int main()
{
int num;
cout<<"Enter the number-->";
cin>>num;
prime(num);

return 0;
}

