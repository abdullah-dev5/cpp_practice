/***Write a program that ask the user to input a month (from 1 to 12) and then 
display which season currently it is. The season should be displayed as per the 
following rules 
i. If the month number is 12 or 1 or 2, then it is the Winter season 
ii. If the month number is 3 or 4, then it is the Spring season 
iii. If the month number is 5 or 6 or 7 or 8 or 9, then it is the Summer season 
iv. If the month number is 10 or 11, then it is the Autumn season 
***/




#include<iostream>
using namespace std ;

int main ()
{
int no_of_month;
cout<<"Enter any month number  "<<endl;
cin>>no_of_month;

switch(no_of_month){
	case 12:
	case 1:
	case 2:
	cout<<"It is the Winter season "<<endl;
	break ;
	case 3:
	case 4:
	cout<<"It is the Spring season "<<endl;
	break ;
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:	
	cout<<"It is the Summer season "<<endl;
	break ;
	case 10:
	case 11:
	cout<<"It is the Autumn season "<<endl;
	break ;
	
	
	
}

return 0 ;
}


