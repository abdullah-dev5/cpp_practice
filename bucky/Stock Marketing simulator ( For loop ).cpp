#include<iostream>
#include<cmath> /*** we need to use cmath liberary b/c we gonna
Power function***/
using namespace std;
int main()
{
float a;   //Amount 
float p=10000; //Principle amount
float r=0.01; //rate 

cout <<"Day"<<" Amount"<<endl;

for (int day=1; day<=30; day++ )
	{
		a=p*pow(1+r,day);  //here we used  power function
		
		cout<<day<<" got "<<a<<endl;
	}

return 0;
}

