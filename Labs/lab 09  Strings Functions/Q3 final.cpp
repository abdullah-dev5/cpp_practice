#include<iostream>
#include<string>
using namespace std;
int main()
{

int len;
string input;
cout<<"Enter the Sim number ";
cin>>input;
	if(input.at(2)=='0')
	{
		cout<<" The number Network is Jazz";
	}
	else if(input.at(2)=='1')
	{
		cout<<"The number Network is Zong";
	} 
	else if(input.at(2)=='3')
	{
		cout<<"The number Network is Ufone";
	}
	else if(input.at(2)=='4')
	{
		cout<<"The number Network is Telenor";
	}
	else
	{
		cout<<"invalid";
	}
return 0;
}

