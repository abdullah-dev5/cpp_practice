#include<iostream>
using namespace std;
int t;
 double printTable(int table)
{	
	//t=table;
	for(int i=1; i<=10; i++)
	{//int s=table*i;
	cout<<table<<" X "<<i<<" = "<<table*i<<endl;	
	}
	 
}

int printTable(int num,int range)
{
	for(int i=1; i<=range; i++)
	{		
	cout<<num<<" X "<<i<<" = "<<i*num<<endl;	

	}

}




int main()
{
	int num1,num,range;
	cout<<"Enter a number whose Table you ";
	cin>>num1;
	cout<<printTable(num1)<<endl;	

	cout<<"Enter a number whose Table you ";
	cin>>num;
	cout<<"Enter a Range whose Table you ";
	cin>>range;
	cout<<printTable(num,range)<<endl;
return 0;
}

