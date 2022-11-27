#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the range ";
	cin>>num;
	for(int i=1; i<=num; i++)
	{
		cout<<"Table of "<<i<<endl;
		for(int j=1; j<=10; j++)
		{
			cout<<i<<" x "<<j<<" = "<<i*j<<endl;
		}
		cout<<endl;
	}




return 0;
}

