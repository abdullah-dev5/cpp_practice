#include<iostream>
#include <string>
using namespace std;
int main()
{
	string name="shisui_uchiha";
	string jutsu="kotoamatsukami";
	
	string Name, Jutsu;
	
	
	
	cout<<"Enter the name of most powerful uchiha genjutsu user..";
	cin>> Name;
	
	if (Name==name ){
	
	cout << "Enter the name of his jutsu..";
	cin>> Jutsu;
	 	if (Jutsu == jutsu){
	 		cout << " Congratulaion you have passed the worlds most easiet test ";
		 }
		 else {
		 	cout << "You have entered wrong jutsu";
		 }
	


	}
else {
		cout<< "Abay tuijhe ye nh aata ";
}	

return 0;
}

