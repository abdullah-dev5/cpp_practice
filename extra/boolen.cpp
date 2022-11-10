
/*
prctising using boolen and if else shorthand 

*/


#include<iostream>
using namespace std;
int main()
{
bool redlights;//(true)
bool  greenlight;//(false)

cout<<"Enter a number "<<endl;
cin >>redlights;

/*if (redlights==true)
cout<<"Stop "<<endl;
else if(redlights==false) {
	
	cout<<"Go through "<<endl;
}
else {
	
	cout<<"invalid"<<endl;
}*/

(redlights==true)?  cout << "Thanks ": cout<<"You are doomed";

return 0;
}



