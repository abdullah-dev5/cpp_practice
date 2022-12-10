#include<iostream>
#include<string>
using namespace std;
int main()
{
int size,num;
	cout<<"Enter size of arrays  ";
	cin>>size;
	int arrays[size];
	for(int i=0;i<size; i++)
	{
		cout<<" Enter Value for arrays  ";
		cin>>arrays[i];
	}
	cout<<endl;
	cout<<"Enter the  number which you want to search   ";
	cin>>num;
	bool search=false;
	for(int j=0; j<size; j++)
	{
		if(arrays[j]==num)
		{
			search=true;
		}
	
	 
	}
	if(search==true)
	{
		cout<<"The numbere is present ";
	}
	else
	{
	cout<<"The numbere is not present ";
		
	}



return 0;
}

