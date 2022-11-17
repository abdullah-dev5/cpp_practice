/*
the program is asking from user to put any number if the the number is 0 print 'Z' or less then
 0 print 'N' and if greater than 0 print 'P' 

*/

#include<iostream>
using namespace std;

// here function is declared 

 char results(double);
// char is return type of this function
// results is function name 
// double is parimeter type and alos which we will use int function..


int main()
{

int number_input,final_result;

cout<<"Enter a number "<<endl;
cin>>number_input;


cout<<" Number is "<< results(number_input)<<endl;
// here we call the function to use 



return 0;
}

char results(double user_input)
//this is called function definition
{
	
	if (user_input > 0)
	{
		return 'P';
	//the return data type is char so it will return any character
	}

	else if(user_input==0){
		
		return 'Z';
	}
	
	else{
		return 'N';
	}

}
