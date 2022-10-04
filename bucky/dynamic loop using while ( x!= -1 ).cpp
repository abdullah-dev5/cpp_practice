#include<iostream>
using namespace std;
int main()
{
int age;
int totalAge=0;
int no_of_ages=0;

cout<<"Enter the person's age or to quit enter -1 "<<endl;
cin>>age;

while(age!=-1){
	totalAge=totalAge + age;

    no_of_ages++;
	
	
	cout<<"Enter the person's age or to quit enter -1 "<<endl;
cin>>age;
}


cout<<"The sum of Entered ages"<<totalAge<<endl;
cout<<"The Number of Entered ages"<<no_of_ages<<endl;
cout<<"The Average of Entered ages"<<totalAge/no_of_ages<<endl;
return 0;
}

