#include<iostream>
using namespace std;

double unit;
// globolly declare a variable whiich will use in every function
double con_c_to_f(double);
double con_f_to_c(double);
double con_c_to_k(double);
double con_k_to_c(double);
double con_f_to_k(double);
double con_k_to_f(double);


int main()
{

	char temp_type1,temp_type2;	
	cout<< " Enter  type to convert ( for Celsius 'c' / for fahrenheit 'f' and for kelvin 'k' ) "<<endl;
	cin>>temp_type1;

	cout<< " Enter  type for convert ( for Celsius 'c' / for fahrenheit 'f' and for kelvin 'k' ) "<<endl;
	cin>>temp_type2;
	
	if (temp_type1=='c' && temp_type2=='f'){
	
			cout<<"enter the unit"<<endl;
			cin>> unit;
			cout<<"celsius into fahrenhiet is  "<<con_c_to_f(unit);
			
}


	else if (temp_type1=='f' && temp_type2=='c'){
	
			cout<<"enter the unit"<<endl;
			cin>> unit;
			cout<<"fahrenhiet into celsius is  "<<con_f_to_c(unit);
			
}


	else if (temp_type1=='c' && temp_type2=='k'){
	
			cout<<"enter the unit"<<endl;
			cin>> unit;
			cout<<"celsius into kelvin is  "<<con_c_to_k(unit);
			
}



	else if (temp_type1=='k' && temp_type2=='c'){
	
			cout<<"enter the unit"<<endl;
			cin>> unit;
			cout<<"kelvin into celsius is  "<<con_k_to_c(unit);
			
}


	else if (temp_type1=='f' && temp_type2=='k'){
	
			cout<<"enter the unit"<<endl;
			cin>> unit;
			cout<<" fahrenhiet into kelvin is  "<<con_f_to_k(unit);
			
}
else if (temp_type1=='k' && temp_type2=='f'){
	
			cout<<"enter the unit"<<endl;
			cin>> unit;
			cout<<" kelvin into fahrenhiet is  "<<con_k_to_f(unit);
			
}


return 0;
}

	double con_c_to_f(double output)
{
	double f;
		f = (output )*9/5 + 32;
		return f;
}

double con_f_to_c(double output)
{
		double c;
		c = (output - 32)*5/9;
		return c;
}

double con_c_to_k(double output)
{
	double k;
		k = output + 273;
		return k;
}

double con_k_to_c(double output)
{
		double c;
		c = output - 273;
		return c;
}

double con_f_to_k(double output)
{
		double k;
		k = (output - 32)*5/9 + 273;
		return k;
}

double con_k_to_f(double output)
{
		double f;
		f = (output - 273 )*1.8 + 32;
		return f;
}
