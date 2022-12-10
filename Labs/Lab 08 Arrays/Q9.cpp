#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int range_1,range_2,range_3;
	range_1=4;
	range_2=7;
	range_3=range_1+range_2;
	
	int arrays_1[range_1]={32,1,7,10};
	int arrays_2[range_2]={12,5,4,23,21,34,45};
	int arrays_3[range_3];
	
	cout<<"First arrays value "<<endl;	
		for(int k=0; k<range_1; k++)
			{
		
			cout<<arrays_1[k]<<"  ";
			arrays_3[k]=arrays_1[k];
			
			}
	cout<<endl;
	cout<<"second arrays value "<<endl;
		for(int j=range_1,index=0;  j<range_3 , index<range_2; j++,index++)
			{
		
			cout<<arrays_2[index]<<"  ";
			arrays_3[j]=arrays_2[index];
					
			}
			
	cout<<endl;
	cout<<"third  arrays value "<<endl;
		for(int i=0; i<range_3; i++)
			{
			cout<<arrays_3[i]<<"  ";
				
			}




return 0;

}
 
