#include<iostream>
using namespace std;

bool isdigit(char );
int main()
{
char x;

cout<<"Enter a characcter..";
cin>>x;

cout<<  isdigit(x) ;


return 0;
}

bool isdigit(char x){
	
	if (x>='0'  && x<='9'){
		return true;
	}
	else {
		return false;
	}
}
