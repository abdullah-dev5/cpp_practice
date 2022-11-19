#include<iostream>
#include<cmath>
using namespace std;

double con(double,double,char);

int main()

{
	
	double num1,num2;
	char opt;	

	cout<<"Enter a operation.. (+ , - , / , *) and (for Sq.root 's' , for Power 'p') "<<endl;
	cin>>opt;

	
	if (opt=='s' || opt=='p')
	{
	cout<<"Enter a Number "<<endl;
	cin>>num1;
	if(opt=='s'){
			cout<<"Sq. Root is= "<<con(num1,num2,opt);
	}
	else if(opt=='p')
{			cout<<"Enter the power of the number"<<endl;
			cin>>num2;
		
			cout<<"Power is= "<<con(num1,num2,opt);			
}
}	
	else {
	cout<<"Enter a number "<<endl;
	cin>>num1;
	cout<<"Enter another number "<<endl;
	cin>>num2;
	switch (opt)
	{
		case '+':
			cout<<"addition is= "<<con(num1,num2,opt);
		break;
		case '-':
			cout<<"subtraction is= "<<con(num1,num2,opt);
		break;
		case '*':
			cout<<"multiplication is= "<<con(num1,num2,opt);
		break;
		case '/':
			cout<<"Division is= "<<con(num1,num2,opt);
		break;
	}
	}
		return 0;
}
		
		
double con(double x,double y,char a)
	{
	double	calc;
	
	switch(a)
	{
		case '+':
			calc=x+y;
		break;
		case '-':
			calc=x-y;
		break;
		case '*':
			calc=x*y;
		break;
		case '/':
			calc=x/y;
		break;
		case 's':
			calc=sqrt(x);
		break;
		case 'p':
			calc=pow(x,y);
		break;
				
	}	
		return calc;
}




