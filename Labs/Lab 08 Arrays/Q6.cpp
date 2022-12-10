#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int range;
	cout<<"Enter the range of array   ";
	cin>>range; 
	int arrays[range];
	for (int input=1; input<=range ; input++)
	{
	
		cout<<"Enter the arrays value  "<<input<<"	";
		cin>>arrays[input];
	
	}	
	cout<<endl;
	cout<<"The value of ODD index is "<<endl;
for(int index=1; index<=range; index++)
	{
			
			if(index%2==0)
			{
				
			}
			
			else 
			
			{
				cout<<arrays[index]<<"	";
			}	
			
	}

return 0;
}

