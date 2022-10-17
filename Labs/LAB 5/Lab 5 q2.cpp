
/**
Write a C++ program that asks a user to input the range (final value) up to which the loop 
should run and then for each number in that range, it should tell whether that (each) 
number is Odd or Even. For example, if the user enters 7 as the final value of range, 

**/

#include<iostream>
using namespace std;
int main()
{
int number;
cout<<"Give the range of the loop..";
cin>>number;

for (int i=1; i<=number;i++){

if (i%2==0){
	cout<< i  <<"  Is Even"<<endl;
}
else {
	cout<<i  <<"  is Odd"<<endl;
}



}

return 0;
}

