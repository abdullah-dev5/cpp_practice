#include<iostream>
#include<string>
using namespace std;
 	int number = 1;
class WalkerClass{
	
 private:	
 	string name;
	int roll;
	public:
	void setName(string x)
	{
	 	name=x ;
		roll = number;
		number++; 
	}
  string getName()
  {
  	return name;
  }
  void printData ()
  {
  	cout<<name << " "<<roll;
  }
 };

int main()
{
	string name;
	WalkerClass bo;
	for(int i=0; i<5; i++)
	{
		cin>> name;
		bo.setName(name);
//		cout<<bo.getName()<<endl;
		bo.printData();
		
	}
return 0;
}

