
/**

Extend t in this program, the actual number’s value should be fixed between 1 and 
100 and the user should be allowed only five (05) attempts. 
If the user guesses the number within five attempts, then display a Congrats message. Otherwise, 
the program should end after five wrong attempts, and display a sorry message to the user and the 
actual number as well
**/

#include<iostream>
using namespace std;
int main()
{
int input;
int i=0;
while (i!=5 && input !=15){

cout<<"Enter a Number "<<endl;
cin>>input;

i++;


		
	
	 if(15>input){
		cout<<"your number is less than the Actual number .."<<endl;
		
		if(i==5){
		cout<<"actual";
	}} 
	else if (15<input){
		cout<<"your number is greater than the Actual number .."<<endl;
	
		if(i==5){
		cout<<"actual is 15";	
	}
	
	}
	
	else{
		cout <<"guessed";
	}	

}

return 0;
}

