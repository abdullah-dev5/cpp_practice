// this program is for 5 digits input number ..
//after this program the Use of modulus (%) is clear 
//user will enter 5 digits any number we will print it And add them 
#include<iostream>
using namespace std;
int main()
{
	int sum=0,y,x;
	cout<<"Enter numbers "<<endl;
	cin>>x;
	// first the it divide The qoutient will ouput ;
		y=x/10000;//it saves Qoutients which we are required
		x=x%10000;//it save reminder which we use for further calculation
		sum=y;//sum assigned wioth the value of y and the value of y is 
			//save in sum we do it for additions of number 
	cout<<"Tenth Thousand Digit "<<y<<endl;
		y=x/1000;
		x=x%1000;
		sum+=y;
	cout<<"Thousandth Digit "<<y<<endl;
		y=x/100;
		x=x%100;
		sum+=y;
	cout<<"Hundredth  Digit "<<y<<endl;
		
		y=x/10;
		x=x%10;
		sum+=y;
	cout<<"Tenth Digit "<<y<<endl;
		
		y=x/1;
		x=x%1;
		sum+=y;
	cout<<"Unit  Digit "<<y<<endl;
	
	cout<<"total sum of all Digits is "<<sum<<endl;

return 0;
}

