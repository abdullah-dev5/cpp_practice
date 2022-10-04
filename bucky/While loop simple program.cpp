#include<iostream>
using namespace std;
int main()
{
int x=1;//here x=1 is for while loop
int y,number; /*** y is declared to get end user input for loop
number is dec for the to get values for the sum
***/

float total=0;

cout <<"Enter a Number for loop"<<endl;
cin>>y;

while(x<=y){
	
cin>>number;
total=total+number;
x++;/*** or x=x+1   in loop 1  will be added in x each time given input***/ 

}
cout<<"your total is  "<<total<<endl;
cout<<"your average is  "<<total/y<<endl;
return 0;
}

