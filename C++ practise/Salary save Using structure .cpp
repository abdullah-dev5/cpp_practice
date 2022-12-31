#include<iostream>
#include<string>
using namespace std;
struct emp
{
	int emnum;
	string name;
	long double bsalary;
	long double nsalary;
	long double gpay;
	long double tax;
	long double hall;
	long double mall;
}e;
int main()
{

cout<<"Enter employe number : ";
cin>>e.emnum;
cout<<"Enter employe name : ";
cin.ignore();
getline(cin,e.name);
cout<<"Enter basic salary : ";
cin>>e.bsalary;

	e.hall=(0.1)*(e.bsalary);
	e.mall=(0.05)*(e.bsalary);
	e.tax=(0.04)*(e.bsalary);
	e.gpay=(e.bsalary)+(e.hall)+(e.mall);
	e.nsalary=(e.gpay)-(e.tax);
	
	cout<<"*****************************************************\n";
	cout<<"                  Employee details                    \n";
	cout<<"******************************************************\n";
	cout<<"Employee number   : "<<e.emnum<<endl;
	cout<<"Employee name     : "<<e.name<<endl;
	cout<<"Basic Salary      : "<<e.bsalary<<endl;
	cout<<"House Allowance   : "<<e.hall<<endl;
	cout<<"Medical Allowance : "<<e.mall<<endl;
	cout<<"Gross pay         : "<<e.gpay<<endl;
	cout<<"Tax deduction     : "<<e.tax<<endl;
	cout<<"Net salary        : "<<e.nsalary<<endl;

return 0;
}

