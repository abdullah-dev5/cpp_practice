#include<iostream>
#include<string>
using namespace std;
int num;
int fun (int a)
{
	if(num==a)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
int sum=0;
int x[10]={1,2,3,4,5,6,7,8,9,10};
cout<<"Enter the value: ";
cin>>num;
for(int i=0; i<10; i++)
{
	sum+=fun(x[i]);
}
if(sum==1)
{
	cout<<"Found";
}
else{
	cout<<"Not found";
}

return 0;
}

