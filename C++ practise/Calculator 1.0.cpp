#include<iostream>
using namespace std;




double add(double,double);
double subt(double,double);
double multi(double,double);
double divi(double,double);
int main()
{
float num1,num2;
char opt;

cout<<"Enter a Number "<<endl;
cin>>num1;
cout<<"Enter 2nd Number "<<endl;
cin>>num2;

cout<<"Enter a Operation"<<endl;
cin>>opt;

switch (opt)
{
	case '+':
		cout<<"addition is= "<<add(num1,num2);
	break;
	case '-':
		cout<<"subtraction is= "<<subt(num1,num2);
	break;
	case '*':
		cout<<"multiplication is= "<<multi(num1,num2);
	break;
	case '/':
		cout<<"Division is= "<<divi(num1,num2);
	break;

}





return 0;
}

double add(double x, double y)
{
float sum ;
	sum=x+y;

return sum;
}

double subt(double x ,double y)
{
	
float minus;
	minus=x-y;

return minus;
}
double multi(double x, double y)
{
float product;
	product=x*y;

return product;
}
double divi(double x, double y)
{
float per;
	per=x/y;

return per;
}



