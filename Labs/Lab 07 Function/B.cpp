#include<iostream>
#include<cmath>
using namespace std;

int squareroot(int num)
	{ 	int sq;
		sq=sqrt(num);
		return sq;
	}	


int main(){
	int no;
	cout<<"Enter a Number whose Squareroot you want  "<<endl;
	cin>>no;
	
	cout<<"The sq.root of your number is "<<squareroot(no)<<endl;

return 0;
}


