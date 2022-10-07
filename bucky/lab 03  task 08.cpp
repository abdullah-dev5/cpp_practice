#include<iostream>
using namespace std;
int main()
{

int num01,num02,num03;

cout<<"Enter 1st number  "<<endl;
cin>>num01;

cout<<"Enter 2nd number  "<<endl;
cin>>num02;

cout<<"Enter 3rd number  "<<endl;
cin>>num03;


if(num01<num02 && num02<num03  ){
	cout<<"third number is Greatest "<<endl;
	
}

else if(num01<num02 && num02>num03  ){
	cout<<"second number is Greatest "<<endl;
}
else {
	cout<<"1st number is Greatest "<<endl;

}

return 0;
}

