#include<iostream>
#include<string>
using namespace std;
int main()
{
char a;
string dept;
cout<<"DO YOU HAVE AN ID CARD (Y/N):"<<endl;
cin>>a;
if (a=='y')
{
cout<<"CS"<<endl;
cout<<"BBA"<<endl;
cout<<"EE"<<endl;
cout<<"EDU"<<endl;
cout<<"WHAT IS YOUR DEPARTMENT NAME?:"<<endl;
cin>>dept;
if(dept=="cs")
{
	cout<<"GO TO BLOCK 1:"<<endl;
}
else if(dept=="ee")
{
	cout<<"GO TO BLOCK 3:"<<endl;
}
else if(dept=="bba")
{
	cout<<"GO TO BLOCK 2:"<<endl;
}
else if (dept=="edu")
{
	cout<<"GO TO KNOWLEDGE CENTER:"<<endl;
}
}
else 
cout<<"YOU ARE NOT ALLOWED"<<endl;
return 0;
}

