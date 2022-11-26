#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int input ;
cout<<"Enter a number "<<endl;
cin>>input;

bool isprime=true ;
	for (int i=sqrt(input); i>1; i-- )
	{
			if(input%i==0)
			{
				isprime=false ;
			}
	}
	if(isprime==0)
	{
	
		cout<<"Not prime "<<endl;
	}
	else 
	{
	cout<<" Prime "<<endl;
	}


return 0;
}

