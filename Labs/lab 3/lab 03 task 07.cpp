
#include<iostream>
using namespace std;

int main(){
int num01,num02;
cout <<"Enter 1st Number "<<endl;
cin>>num01;
cout <<"Enter 2nd  Number "<<endl;
cin>>num02;

if(num01==num02){
	cout <<"Entered  Numbers are Equal  "<<endl;
}
else if(num01>num02){
	cout <<"1st number is Greater than 2nd number  "<<endl;
}
else {
	cout <<"1st number is Less than 2nd number "<<endl;
}

return 0;
}

