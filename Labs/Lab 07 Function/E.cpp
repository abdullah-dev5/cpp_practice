#include<iostream>
using namespace std;

float percentage(float obt,int total)
{	float per;
		per=(obt/total)*100;
	return per;
}


int main()
{
float obt;
int total;
	cout<<"Enter Obtain  marks "<<endl;
	cin>>obt;
	cout<<"Enter Total  marks "<<endl;
	cin>>total;
	
	cout<<"The percentage is "<<percentage(obt,total);
	
return 0;
}


