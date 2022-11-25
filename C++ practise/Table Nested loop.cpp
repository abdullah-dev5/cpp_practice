#include<iostream>
using namespace std;
int main()
{
	
int anyNumber, a=1;
cout<<"Please Enter Any Number : ";
cin>>anyNumber;

	for(int i=1; i<=3; i++)
	{
		for(int j=1; j<=10; j++)
		{
			cout<<anyNumber*a<<"  ";
			a++;
		}
		
		cout<<endl;
	}
return 0;
}

