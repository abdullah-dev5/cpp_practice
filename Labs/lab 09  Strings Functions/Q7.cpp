#include<iostream>
#include<string>
using namespace std;
int main()
{

string input;

	cout<<"Enter a  word ";
	cin>>input;
	int len=input.length();
	bool result=false;
	for(int i=0,j=(len-1);i<len, j>=0; i++,j++)
	{
		if((input.substr(i,1))==(input.substr(j,1)))
		{
		//	cout<<"Numbers are palindrome ";
		//	break;
			result=true;
		
		}
		
		else {
			result=false;
		}
		
		}
		if(result==true)
		{
			cout<<"P";
		}
		else{
			cout<<"N";
		}


return 0;
}
