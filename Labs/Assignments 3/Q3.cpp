#include<iostream>
using namespace std;

int sum(int arr[],int size)
{
	int sum=0;
	for(int i=0; i<size; i++)
{
	sum+=arr[i];
}
return sum;
}
void normal_arrays(int array1[],double arrays2[],int size)
{
	double total;
	total=sum(array1,size);
   
	for(int i=0; i<size; i++)
{
	arrays2[i]=(array1[i])/total;
}
cout<<endl;
cout<<"Elements of second array are : ";
for(int i=0; i<size; i++)
{
	cout<<arrays2[i]<<" ";
	
}
}

int main()
{
int size;
cout<<"Enter size of an array  you want : ";
cin>>size;
double arrays1[size];
int array2[size];
for(int i=0; i<size; i++)
{
	cout<<"Enter value  : ";
	cin>>array2[i];
}
cout<<"Elements of first array : ";
for(int i=0; i<size; i++)
{
	cout<<array2[i]<<" ";
	
}
normal_arrays(array2,arrays1,size);
return 0;
}

