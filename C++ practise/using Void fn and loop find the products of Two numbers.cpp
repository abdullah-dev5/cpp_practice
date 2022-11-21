#include<iostream>
using namespace std;

int multiply(int x, int y)
{	
	int multi=x*y;
	return multi;	
}

void multiple(int x, int y)
{	
cout<<" the Product of the numbers is "<<multiply(x,y)<<" \n "<<endl;
}

int main ()
{

int a,b;
// loop for asking many times input
do{

cout<<" Enter the number.. ";
cin>>a;

cout<<" Enter the number.. ";
cin>>b;

//this if statement use to print the line but stopped when user exist
if (a!=0 || b!=0){
cout<<" \t OR \n  To Exit Enter 0 both times \n\n";
}

//this if sataement use to no print when user exist
	if (a==0 && b==0 )
{						}
//else used to print true statements 
	else {
	multiple(a,b);
}

}
/* the statment will be false when user input zeros 
beacuse we need always true statement to run loop */
//a should equal to zero  and b should equal to zero to end loop
	while(a!=0 || b!=0);

return 0;
}

