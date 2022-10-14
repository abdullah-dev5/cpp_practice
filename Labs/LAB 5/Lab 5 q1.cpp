
/**
Write a C++ program that should ask a user to input an integer number and then 
displays/prints 
**/
#include<iostream>
using namespace std;
int main()
{
	int number;
	cout <<"Enter any number.. ";
	cin>>number;
	
	
	for (int i=1; i<=10; i++){
		cout<<number<<"x"<<i<<"="<<number*i<<endl;
	}
	
return 0;
}

