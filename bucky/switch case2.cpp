#include<iostream>
using namespace std;
int main()
{
int age;
cout<<"Please Enter your age"<<endl;
cin >>age;
	
	
switch(age){

	case 18:
	cout<<"you can drive "<<endl;
	break;
	case 21:
	cout<<"get a job"<<endl;
    break;	 
	case 25:
	cout<<"Get a car "<<endl;
	break;
	default:
		cout<<"sorry nothing for you"<<endl;
} 

return 0;
}

