#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int range;
	cout<<"Enter the range for array =  ";
	cin >>range ;
	int arrays[range];
	int reverse[range];
	
		for(int i=0; i<range; i++)
		{
		cout<<" Enter vakue for arrays ";
		cin>>arrays[i];
	
		
		}
	cout<<"value of 1st arrays "<<endl;
	
		for (int j=0; j<range; j++)
		{
			cout<<arrays[j]<<"	";
			reverse[j]=arrays[j];	
		}
	cout<<endl;
	cout<<"value of 1st arrays "<<endl;
	
			for (int k=(range-1); k>=0; k--)
		{	
			cout<<reverse[k]<<"	";
		}
	
return 0;

}

