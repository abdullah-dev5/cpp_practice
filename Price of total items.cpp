#include<iostream>
using namespace std;
int main()
{
int item1,item2,item3;
cout<<"Enter 1st item "<<endl;
cin>>item1;

cout<<"Enter 2nd item "<<endl;
cin>>item2;
cout <<"Enter 3rd item "<<endl;
cin>>item3;
float subtotal;
subtotal=item1+item2+item3;
float tax;
tax=subtotal*15/100;
cout<<"subtotal price "<<subtotal<<endl;
cout<<"tax is "<<tax<<endl;
cout <<"total price with tax  "<<subtotal+tax<<endl;
return 0;
}

