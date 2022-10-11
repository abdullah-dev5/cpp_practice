#include<iostream>
using namespace std;

int main(){
float ict_marks,eng_marks,math_marks,pst_marks,islamiat_marks;

cout<<" Enter your I.C.T Marks  .. "<<endl;
cin>>ict_marks;

cout<<" Enter your Islamiat Marks  .. "<<endl;
cin>>islamiat_marks;

cout<<" Enter your P.S.T Marks  .. "<<endl;
cin>>pst_marks;

cout<<" Enter your English Marks  .. "<<endl;
cin>>eng_marks;

cout<<" Enter your Math Marks  .. "<<endl;
cin>>math_marks;

float obtained,percentage;
int total=500;
 obtained=ict_marks+islamiat_marks+pst_marks+math_marks+eng_marks;

percentage=obtained/total*100;

cout<<"Your obtained marks are "<<obtained<<endl;
cout<<"Your percentage is "<<percentage<<endl;

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

 else if (percentage>=90 && percentage<=100 ){
cout <<"you got A1"<<endl;
 }

return 0;
}

