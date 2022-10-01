#include<iostream>
using namespace std;

/***
using Class with Multiple Objects print out 2 or more objects in same 
class.

***/
class Smartphones{
	public:
		string Brand;
		string Model;
		int year;
};



int main()
{
	// object 1
Smartphones phoneObject1;
phoneObject1.Brand="samsung";
phoneObject1.Model="Note 10";
phoneObject1.year=2021;

// object 2 

Smartphones phoneObject2; // here we are using on same class object 2
phoneObject2.Brand="Huawei"; 
phoneObject2.Model="Y 9 Prime";
phoneObject2.year=2019;


cout<<phoneObject1.Brand<<" "<<phoneObject1.Model<<" "<<phoneObject1.year<<endl;
cout<<phoneObject2.Brand<<" "<<phoneObject2.Model<<" "<<phoneObject2.year<<endl;


return 0;
}

