
/**
Create a Guessing Game program, where you will guess a number. For now, assume any 
fixed number of choice as the actual number to be guessed (means, hardcode that value 
inside the code). Then, continuously ask the user to guess the number (I.e., input the 
number) unit and unless he/she guesses it correctly.

**/
#include<iostream>
using namespace std;
int main()
{
float math,urdu,sindhi,english;	
	
	
int students;
cout <<"How many student's record do you want to keep..";
cin >>students;

int stud;
/*cout <<"Enter the record of student..";
cin >>stud;*/

for(int i=1; i<=students; i++){
	int stud;
	cout <<"Enter the record of student..";
	cin >>stud;
	
	
	
	
	cout <<"Enter the marks of math..";
	cin>>math; 

cout <<"Enter the marks of Urdu.."<<endl;
	cin>>urdu;

cout <<"Enter the marks of sindhi.."<<endl;
	cin>>sindhi;

cout <<"Enter the marks of english.."<<endl;
	cin>>english;
	
	float percentage,obtained,total;
obtained=math+sindhi+english+urdu;
total=400;
percentage=(obtained/400)*100;

cout <<"Obtained marks.."<<obtained<<endl;
cout<<"The Percentage is.."<<percentage<<endl;



}



return 0;
}

