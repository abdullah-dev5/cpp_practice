#include<iostream>
#include<conio.h>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	int array1[5]={3,6,9,12,15};
	int array2[5];
	cout <<"First arrays value is "<<endl;
	for (int i =0; i<5; i++)
	{
		array1[i];

		cout<<array1[i]<<" ";		
		array2[i]=array1[i];
	
		
	}
	cout<<endl;
	cout <<"second arrays value is "<<endl;
	for(int j=0; j<5; j++)	
		{
	
			cout<<array2[j]<<" ";
		}

return 0;
}

