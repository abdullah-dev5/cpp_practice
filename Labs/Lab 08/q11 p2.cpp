#include<iostream>
#include<string>
using namespace std;
int main()
{

int min,size,comp;
cout<<"size of arrays  ";
cin>>size;
int arrays[size];
	for(int i=0;i<size;i++)
	{
		cout<<"Enter value for arrays  ";
		cin>>arrays[i];
		if(1==i)
		{
			
		}
	min=arrays[0];
	}
		for(int j=0; j<size; j++)
		{
			if(arrays[j]<min)
			{
				min=arrays[j];
				
			}
		}
	
		cout<<"minimium  number is "<<min<<endl;
return 0;
}

