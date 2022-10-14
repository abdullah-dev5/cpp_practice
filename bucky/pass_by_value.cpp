/**
by value are passed
	int , double long , byte string
	
*/

#include<iostream>

using namespace std;
int callMe(int a, int b)
{
	a= 10;
	b = 10;
	
}
int main()
{

	int num1 = 5;
	int num2 = 5;
	callMe(num1,num2);
	cout<<num1;
	cout<<num2;
	

return 0;
}

