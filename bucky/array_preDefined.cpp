#include<iostream>
using namespace std;
void print_arrayData(int array[],int size)
{
		for(int i=0; i<size; i++)
		{
			cout<<array[i]<<endl;
//			array[i] = 20;
		}
	

}
int main()
{
	int a[] = {1,2,3,4}; // will perceive itself the size 
//	int array_1[1] = {1,2,3,4}; // not allowed
	int length  = sizeof(a)/(sizeof(int));

	print_arrayData(a,length);
//	cout<<sizeof(a);
	for(int i=0; i<length; i++)
		{
			cout<<a[i]<<endl;
			
		}
	 


return 0;
}

