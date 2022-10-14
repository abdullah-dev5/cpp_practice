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
	
	string subject;
	int marks;
	Data data_list[2];
	for(int i=0; i<2; i++)
	{
		cout<<"Enter subject"<<endl;
		cin>>subject;
		cout<<"Enter marks"<<endl;
		cin>>marks;
		data_list[i].subject = subject;
		data_list[i].marks = marks;
	}
	for(int i=0; i<2; i++)
	{
		cout<<"subject of student "<<(i+1)<<" "<<data_list[i].subject<<endl;
		cout<<"marks of student "<<(i+1)<<" "<<data_list[i].marks<<endl;
		
	}
	return 0;
}

