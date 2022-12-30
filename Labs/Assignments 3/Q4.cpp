#include<iostream>
 using namespace std;
int main()
{
int array[4][5];
for(int i=0; i<4; i++)
{
	for(int j=0; j<5; j++)
		{
		cout<<"Enter number : ";
		cin>>array[i][j];
		}
	cout<<endl; 
	}
	cout<<endl;
cout<<"The numbers in the arrays are below "<<endl;
for(int i=0; i<4; i++)
	{
	for(int j=0; j<5; j++)
		{
		cout<<array[i][j]<<" ";
		}
	cout<<endl;
	 }


return 0;
}
