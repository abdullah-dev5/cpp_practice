#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int range;
cout<<"Enter the range "<<endl;
cin>>range;

int arrays1[range];

	for (int i=0 ; i<range; i++)
	{
		cout<<"Enter the value for arrays ";
		cin>> arrays1[i];
		
		
	
	}
	
	cout <<endl;
	for(int j=0; j<range; j++)
	{
			if(arrays1[j]%2==0)
			{
			
			cout<<arrays1[j]<<"	";
			}
				
		}

return 0;
}

