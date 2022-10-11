#include<iostream>
using namespace std;

int main(){
 
 float percentage;
 cout <<"Enter your percentage  "<<endl ;
 cin >>percentage;
 
 if(percentage<=60){
 	cout <<"you got F"<<endl;
 }
  else if (percentage>=60 && percentage<70){
cout <<"you got C"<<endl;}
 
  else if (percentage>=70 && percentage<80){
cout <<"you got B"<<endl;
 }
else if (percentage>=80 && percentage<90){
cout <<"you got A"<<endl;
 }

 else if (percentage>=90  &&  percentage<=100 ){
cout <<"you got A1"<<endl;
 }
return 0;
}

