#include<iostream>
using namespace std;
int main()
{
float x;

cout <<" Enter Consumed unit ";
cin>>x;

if (x>=1 && x<=199){
	cout <<" Your bill is "<<5*x<<"  RS "<<endl;
}
else if (x>=200 && x<=399){
	cout <<" Your bill is "<<10*(x-199)+995<<"  RS "<<endl;
}
else if (x>=400 && x<=599){
	cout <<" Your bill is "<<15*(x-399)+2985<<"  RS "<<endl;
}
else if (x>=600){
	cout <<" Your bill is "<<20*(x-599)+5970<<"  RS "<<endl;
}



return 0;
}

