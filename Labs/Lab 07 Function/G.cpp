#include<iostream>
using namespace std;

bool Even(int num)
{
	if(num%2==0)
	{
	return true;
	}
	else 
	{
	return false;
	}

}

int main(){

int number;

cout<<"Enter a number "<<endl;
cin>>number;
		if ((Even(number))==1)
		{
			cout<<"Number is Even";
		}
	else
		{
		cout<<"Number is not Even "<<endl;	
			
		}
	
	
return 0;
}


