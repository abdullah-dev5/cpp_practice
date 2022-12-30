#include<iostream>
using namespace std;
float findmaximium(int size, float arraymax[])
{
float maximium;
maximium=arraymax[0];
for(int i=0; i<size; i++) {

 if(arraymax[i]>maximium)
	{
	maximium=arraymax[i];
	}

	}
	return maximium;
}
int main()
	{
	int size;
	cout<<"Enter size of an arrays : ";
	cin>>size;

	float array[size];
	for(int i=0; i<size; i++) 
	{
	cout<<"Enter values for arrays :";
	cin>>array[i];
	}
	cout<<"Maximum value in the array is : "<<findmaximium(size,array);


return 0;
}
