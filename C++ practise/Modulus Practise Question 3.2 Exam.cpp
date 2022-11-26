#include<iostream>
using namespace std;

int main()
{
int num,sum_o=0,sum_e=0,x;

	cout<<"Enter five digits number "<<endl;
	cin>>num;
	for(int i=1; i<=5; i++)
	{
			
		if (i==1)
		{
			x=num/10000;
			if(x%2==0)
				{
					sum_e=sum_e+x;	
				}
			else
				{
					sum_o+=x;	
				}
		}
		else if (i==2)
			{
				x=num%10000/1000;
				if(x%2==0)
					{
					sum_e=sum_e+x;	
					}
				else
					{
						sum_o+=x;	
					}
			}
		else if (i==3)
			{
				x=num%1000/100;
				if(x%2==0)
					{
					sum_e=sum_e+x;	
					}
				else
					{
						sum_o+=x;	
					}
			}
		if (i==4)
			{
				x=num%100/10;
				if(x%2==0)
					{
						sum_e=sum_e+x;	
					}
				else
					{
						sum_o+=x;	
					}
			}
		else if (i==5)
			{
				x=num%10/1;
				if(x%2==0)
					{
					sum_e=sum_e+x;	
					}
				else
					{
						sum_o+=x;	
					}
			}
	}
	cout<<"The sum of Even is  "<<sum_e<<endl;
	cout<<"The sum of Odd is   "<<sum_o<<endl;
		x=sum_o+sum_e;
	cout<<"Total Sum is "<<x<<endl;
return 0;
}

