#include<iostream>
using namespace std;
int main()
{
	int a = 2;
//	string data = a==1 ? "one": "not one";
//	cout<<data;
	
	string newData = a==1 ? "one": a ==2 ? "two": "other";
	cout<<newData;

return 0;
}

