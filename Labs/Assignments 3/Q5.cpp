#include<iostream>
using namespace std;
struct person
{
	int wage_rate;
	int vacations;
	char status;
};
void disemploye(person p)
{
cout<<"Enter vacations done by employee : ";
cin>>p.vacations;
cout<<"Enter status Hourly or Salaried : ";
cin>>p.status;
if(p.status=='H'|| p.status=='h')
{
	cout<<"Enter wage rate of employee : ";
    cin>>p.wage_rate; 
	cout<<"Employee daily wages are : "<<p.wage_rate*12<<endl;
}
else
{
	cout<<"Employee salary is : "<<30000<<endl; 
}
cout<<"Empolyee have done "<<p.vacations<<" vacations. "<<endl;
cout<<"Employee status is ";
if(p.status=='H'||p.status=='h')
cout<<"Hourly ";
 else

	cout<<"Salaried.";

}
int main()
{
	person p;
dis_employe(p);
return 0;
}

