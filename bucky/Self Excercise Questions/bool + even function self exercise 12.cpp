#include<iostream>
using namespace std;

bool even(int numb){
	if(numb%2==0){
		return true;
		
	}
	else{
		return false ;
		
	}
	
}
int main()

{
int numb;
cout<<"Enter an integer "<<endl;
cin>>numb;


cout<<"if result is 1 then it's true else 0 means false "<<endl;
cout<<"results "<<even(numb);



return 0;
}

