#include<iostream>
using namespace std;

double mycode(int);

int main()
{

int a;
cout<<"enter "<<endl;
cin>>a;

mycode(a);


return 0;
}

double mycode(int x)
{
		x=x+2;
	cout<<"This will works "<<x;
	
}

