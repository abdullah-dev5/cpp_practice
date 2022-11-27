#include<iostream>
using namespace std;
int main()
{
	for(int i =1 ; i<=10; i++)
	{
		//cout<<i<<" ";
	
		if (i<6)
			{
				for(int j=1 ; j<i; j++)
					{
			
					cout<<" * ";		
					}
			}
			
		else if (i>5)
			{
				for(int k=i;k<=10; k++)
				{
					cout<<" * ";
	
				}	
			}
		cout<<endl;	
	
	}

return 0;
}
		
