#include<iostream>
using namespace std;

void get_num(int& input1,int& input2)
//we use ampersand character (&) to change input value to actual value
//here we get input from user
{
	cin>>input1>>input2;
}
void swap_num(int& num1,int& num2)
{//whenever we need to change value we use & to use it 
	int swipe=0;
		swipe=num1;
		num1=num2;
		num2=swipe;
}
void results(int num1,int num2)
{
		cout<<"1st Number is "<<num1<<endl;
		cout<<"2nd Number is "<<num2<<endl;
}


int main()
{
	int num1,num2 ;//this varaibles have garbage values beacause we havn't intialize any value
//we will get input values from end-user by using function 
		get_num(num1,num2);//this function will get values
		swap_num(num1,num2);//this will perform swapping
		results(num1,num2);//this will show the final result


	return 0;
}

