#include<iostream>
#include<conio.h>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	int size_of=0;
	cout<<"Enter how many students you want to record  ";
	cin>>size_of;

	string name[size_of];
	int chemist[size_of];
	int english[size_of];
	int math[size_of];
	int physics[size_of];
	int sum[size_of];
	float per[size_of];
	char grade[size_of];
	
		for(int i=0; i<size_of; i++)
		{
			cout<<"Enter the name of students  " ;
			cin>>name[i];
			
			
		}
		for(int j=0; j<size_of; j++ )
		{
			cout<<"Enter the marks of "<<name[j]<<"	 in  chemist  ";
			cin>>chemist[j];
			cout<<"Enter the marks of "<<name[j]<<"	 in  physics  ";
			cin>>physics[j];
			cout<<"Enter the marks of "<<name[j]<<"	 in  math  ";
			cin>>math[j];
			cout<<"Enter the marks of "<<name[j]<<"	 in  english  ";
			cin>>english[j];
		
		}	
	
		for (int k=0; k<size_of; k++)
		{
			sum[k]=english[k]+math[k]+physics[k]+chemist[k];
		}
		for (int l=0; l<size_of; l++)
		{
			per[l]=(sum[l]*100)/400;
			
		}
		for (int m=0; m<size_of; m++)
		{
			if(per[m]>=80 && per[m]<=100)
			{
				grade[m]='A';
			}
			else if(per[m]>=70 && per[m]<80)
			{
				grade[m]='B';
			}
			else if(per[m]>=60 && per[m]<70)
			{
				grade[m]='C';
			}
			else 
			{
				grade[m]='F';
			}
			
		}
		for(int n=0; n<size_of; n++)
		{
		cout<<"======================================================================"<<endl;
		cout<<"Name physics	chmist math english	obtain	per	grade"<<endl;
		cout<<"======================================================================"<<endl;	
		cout<<name[n]<<" 	"<<physics[n]<<"	"<<chemist[n]<<" 	"<<math[n]<<"  	"<<english[n]<<" 	 "<<sum[n]<<"	"<<per[n]<<" 	"<<grade[n]<<endl;	
			
			
		}		
		
		
		
		
		
		


getch();
}

