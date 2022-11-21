#include<iostream>
using namespace std;

int multiply(int x, int y)
{
	
	int multi=x*y;
	return multi;	
}

void multiple(int x, int y)
{
	
cout<<"the Product of the numbers is "<<multiply(x,y)<<endl;
}

int main ()
{
int a,b;
int x,y;
cout<<"Enter the numbers"<<endl;
cin>>a>>b;
cout<<"Another numbers "<<endl;
cin>>x>>y;


multiple(a,b);
/*so we need many another expersion or function to calculate the value of x,y
but with the help of void function  we can use the one function or expersion many times */
multiple(x,y);


return 0;
}

