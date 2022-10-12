#include<iostream>
using namespace std;
int main()

{
int x;

int y;

cout << "1. books (Per item 500)"<<endl	;
cout << "2. T-shirts (Per item 700)"<<endl;
cout << "3. Shoes  (Per  Pair item 1000)"<<endl;
cout << "0.Enter Zero to exit the program"<<endl;


cin >> x;

/*switch(x){

case 1:
cout << "You have slected books"; 
 break;


case 2:
cout << "You have slected T-Shirts"; 
 break;

case 3:
cout << "You have slected Shoes"; 
 break;

}

if (y>0){
	cout<< " Now Select the Quantity:";
cin >>y;
}
cout<< " Now Select the Quantity:";
cin >>y;*/

while (x>0){


cout << "1. books (Per item 500)"<<endl	;
cout << "2. T-shirts (Per item 700)"<<endl;
cout << "3. Shoes  (Per  Pair item 1000)"<<endl;
cout << "0.Enter Zero to exit the program"<<endl;


cin >> x;

switch(x){

case 1:
cout << "You have slected books"; 
 break;


case 2:
cout << "You have slected T-Shirts"; 
 break;

case 3:
cout << "You have slected Shoes"; 
 break;

}

cout<< " Now Select the Quantity:";
cin >>y;
}
return 0;
}

