#include<iostream>
using namespace std;

/***For performing given  Operation by end-user,
 we take get input in main **/

// declared for operations
int calculate(int a, int b,char op)
{
	if(op== '+'){
	cout <<"the addition of numbers is .. ";
	return a+b;
	}
	// return is used for output
	//the calculation will be perform in return
	if(op=='-'){
	cout <<"the substraction of numbers is .. ";
	return a-b;
	}
	
	
	if(op=='*')
	{cout <<"the Multiplication of numbers is .. ";
	return a*b;
	}
	
	if(op=='/'){
	cout <<"the Divison of numbers is .. ";
	return a/b;
	}

}
int main()
{

float x,y;

cout<<"Please Enter number 1... ";
cin>>x;

cout<<"Please Enter number 2...  ";
cin>>y;

cout<<"Please Enter Any operation +,-,*,/ "<<endl;
char operation;
//data type char is used b/c operators lies in  special character 

//this variable is used to get any operator from end user
cin>>operation;

	cout<< calculate(x,y,operation);
/*** (x,y,operation) here these  are b/c 
we will use this info for operations***/ 
return 0;
}


