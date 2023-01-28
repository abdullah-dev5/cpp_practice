/**
Write a C++ program that receives the total number of integers (N) from the user. Then, 
the program will ask the user for N real numbers. By applying for loop, your program 
should find and display the largest and the lowest of the numbers. Give a proper message
for invalid user input
**/

#include<iostream>
using namespace std;
int main()
{
int i=1;
int n;
int highest , lowest;
int num;
cout<<"Enter the amount of the number of series "<<endl;
	cin>>n;
	cout<<"Enter a number"<<endl;
	cin>>num;
	highest=num;
	lowest = num;
	while( i < n )
{
	if(num > highest ){
		highest = num;
		
	}
	if (num<lowest)
	{
		lowest=num;
	}
	cout<<"Enter a number "<<endl;
	cin>>num;
	i++;
	
	
}

		if(num>highest ){
	
	
}

cout<<"The program has ended "<<endl;
cout<<"The highest  "<<highest<<endl;
cout<<"The lowest "<<lowest<<endl;



return 0;
}

