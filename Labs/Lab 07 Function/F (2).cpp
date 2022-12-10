#include<iostream>
using namespace std;


float percentage(float obt,int total)
{	float per;
		per=(obt/total)*100;
	return per;
}

char grade(float grd)
	{
		if(grd>=80 && grd<=100)
		{
			return 'A';
		}
		
		else if(grd>=70 && grd<80)
		{
			return 'B';
		}
		else if(grd>=60 && grd<70)
		{
			return 'C';
		}
		else if(grd>=00 && grd<60)
		{
			return 'F';
		}
		
		
	}

int main()
{
float obt,a;
int total;
	cout<<"Enter Obtain  marks "<<endl;
	cin>>obt;
	cout<<"Enter Total  marks "<<endl;
	cin>>total;
	
	cout<<"The percentage is "<<percentage(obt,total)<<endl;
	a=percentage(obt,total);
	cout<<"The grade is "<<grade(a)<<endl;
return 0;
}


