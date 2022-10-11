#include<iostream>
using namespace std;
int main()
{
int num1 ,num2 ;
char op;
cout<<"enter 1st integer "<<endl;
cin>>num1;
cout<<"enter 2nd integer "<<endl;
cin>>num2;
cout<<"enter any operation ( +,-,*,/ ) "<<endl;
cin>>op;
switch(op){
case '+':
	cout <<"The Sum of your Numbers is .. "<<num1+num2<<endl;
    break;
case '-':
	cout <<"The Substraction of your Numbers is .. "<<num1-num2<<endl;
    break;
    case '*':
	cout <<"The Multiplication of your Numbers is .. "<<num1*num2<<endl;
    break;
    case '/':
	cout <<"The Divsion of your Numbers is .. "<<num1/num2<<endl;
    break;


	
}





return 0;
}

