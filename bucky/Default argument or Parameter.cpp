#include<iostream>
using namespace std;

int volume(int l=1, int b=1,int w=3);
// these are default values we assigned 

int main()
{
		
	int l,b,w;

cout<<"Length"<<endl;
cin>>l;
cout<<"bridth"<<endl;
cin>>b;
/*** we ask for the input of L and B nor W . Width value will be 
assigned from default  ***/ 
	
cout<<volume (l,b)<<endl;


	
return 0;
}
int volume(int l, int b,int w)
{
     return l*b*w;} // this function basically used for calculation
