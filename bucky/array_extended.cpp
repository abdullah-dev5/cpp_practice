/**
	Takes the Subject Data and prints its 
	and class is used with arrays
*/

#include<iostream>
using namespace std;
class Data{
	public:
	string subject;
	int marks;
};
int main()
{
	
	int length;
	cout<<"enter the total subject"<<endl;
	cin>>length;
	string subject;
	int marks;
	Data data_list[2];
//	int length  = sizeof(data_list)/(sizeof(Data));
	
	for(int i=0; i<length; i++)
	{
		cout<<"Enter subject"<<endl;
		cin>>subject;
		cout<<"Enter marks"<<endl;
		cin>>marks;
		data_list[i].subject = subject;
		data_list[i].marks = marks;
	}
	for(int i=0; i<length; i++)
	{
		cout<<"subject of student "<<(i+1)<<" "<<data_list[i].subject<<endl;
		cout<<"marks of student "<<(i+1)<<" "<<data_list[i].marks<<endl;
		
	}
	return 0;
}

