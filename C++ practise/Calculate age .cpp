#include<iostream>
using namespace std;

void get_input(int& inp_years,int& inp_month, int& inp_date)
{
	cout<<"Enter your birth year "<<endl;
	cin>>inp_years;
	cout<<"Enter your birth Month "<<endl;
	cin>>inp_month;
	cout<<"Enter your date of birth  "<<endl;
	cin>>inp_date;
}

void present_dates(int& pres_years,int& pres_month, int& pres_date)
{
	cout<<"Enter current year "<<endl;
	cin>>pres_years;
	cout<<"Enter current Month "<<endl;
	cin>>pres_month;
	cout<<"Enter  todays date  "<<endl;
	cin>>pres_date;
}


int years_calc(int years, int present_year)
{
	int total_years;
		total_years=present_year-years;
	//2022 is a current year ..  value will change in present year 
	return total_years;	
}

int  month_calc(int months,int present_month)
{	
	int total_months;
		total_months=present_month-months;
		//11 is a current month ..  value will change in present month 
	
	return total_months;
}

int days_calc(int days,int today_day)
{
	
	int total_days;
		total_days=today_day-days;
		
	return 	total_days;
}



int main()
{
int year , month , day ;
int present_year,present_month,present_day;
	get_input(year,month,day);
	present_dates(present_year,present_month,present_day);
	
		cout<<"You have successfully wasted "<<endl;
		cout<<"Years "<<years_calc(year,present_year)<<" ";
		cout<<"Months "<<month_calc(month,present_month)<<" ";
		cout<<"Days "<<days_calc(day,present_day);
	
	
		
return 0;
}



//void show_results()
