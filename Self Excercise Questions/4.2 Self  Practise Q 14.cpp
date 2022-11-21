#include<iostream>
#include<cmath>
using namespace std;

bool isdigit(int x, int y );
int main()
{
int x,y;

cout<<"Enter a characcter..";
cin>>x;
cout<<"Enter a characcter..";
cin>>y;
cout<<  isdigit(x,y) ;


return 0;
}

bool isdigit(int x,int y){
	
	
	if (sqrt(x)== y){
		return true;
	}
	else {
		return false;
	}
}
