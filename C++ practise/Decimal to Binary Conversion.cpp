#include<iostream>
#include<string>
using namespace std;
int main()
{
int x[8]={0,0,0,0,0,0,0,0};
int num;//num limit is till 1024
cout<<"Enter : ";
cin>>num;
int i=0;
while(num!=1)
{
	
	x[i]=(num%2);
	num=(num/2);
	if(num==1)
	{
		x[i]=num;
	}
	i++;
}
cout<<"(";
for(int i=7; i>=0; i--)
{
	cout<<x[i];
}
cout<<")";
return 0;
}

