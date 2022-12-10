#include<iostream>
#include<string>
using namespace std;
int main()
{

string word;
cout<<"Enter a Word  ";
cin>>word;
	int len;
	len=word.length();
	char array[len];
	bool result=false;
	for(int i=0; i<len; i++)
	{
		array[i]=word[i];
	
		
		
		
	}
//	cout<<array<<endl;
	for(int j=0, k=len-1; j<len, k>=0; j++,k--)
	{
		if(array[j]==word[k])
			{
				result=true;
			}	
			else
			{
				result=false;
				}	
	}
	if(result==true)
	{
		cout<<"Palindrome";
	}
	else 
	{
		cout<<"Not palindrome";
	}


return 0;
}

