#include<iostream>
#include<string>
using namespace std;
int main()
{
	int size,max=0;
	cout<<"enter thr range  ";
	cin>>size;
	int arrays[size];
	cout<<endl;
	for(int h=0; h<size; h++)
	{
		cout<<"enter the number in arrays  ";
		cin>>arrays[h];
	}
	for(int i=0; i<size;i++)
	{
		int y;
		y=arrays[i];
		if(y>max)
		{
			max=arrays[i];		
		}
	}
cout<<"max is "<<max;
return 0;
}

