#include<iostream>
#include<string.h>
using namespace std;


string inOrder(int num1, int num2,int num3)
{
	if (num1<=num2 &&  num1<num3)
		{
		return "true";
		}
		
	else if (num1<=num2 &&  num2<=num3)
		{
		return "true";		
		}
		
	else if (num1<num3 &&  num2<=num3)
	{
		return "true";
	}
	
	else{
		return "false";
	}
}

int main()
{
int num1, num2,num3;
	cout<<"Enter a number "<<endl;
	cin>>num1;
	cout<<"Enter a number "<<endl;
	cin>>num2;
	cout<<"Enter a number "<<endl;
	cin>>num3;

cout<<"Results "<<inOrder(num1,num2, num3);

return 0;
}

