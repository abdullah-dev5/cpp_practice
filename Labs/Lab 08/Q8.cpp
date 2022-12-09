#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arrays[5]={10,15,20,25,30};
	int arrays2[5]={3,6,9,12,15};
	int arrays3[5];

	cout<<"The value of first arrays is "<<endl;
		for(int x=0; x<5; x++)
		{
			cout<<arrays[x]<<"	";
		}
	cout<<endl;
	cout<<"The value of second arrays is "<<endl;
		for(int x=0; x<5; x++)
		{
			cout<<arrays2[x]<<"	";
		}
	cout<<endl;
	cout<<"The value of third arrays is "<<endl;
		for(int x=0; x<5; x++)
		{
			arrays3[x]=arrays[x]+arrays2[x];
			cout<<arrays3[x]<<"	";
		}
	

return 0;
}

