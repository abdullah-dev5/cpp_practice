//number of params,
//type of params

#include<iostream>
using namespace std;
int print()
{
	
	cout<<"called me "<<endl;
	return 1;
}
int print(float a)
{
	cout<<"float"<<endl;
	return a;
}
int print(double a)
{
	
	cout<<"double me "<<endl;
	return a;
}

int print(int a)
{
	cout<<"mujhe bulaya"<<endl;
	return a;
}

int main()
{

print((int)1.2);

return 0;
}

