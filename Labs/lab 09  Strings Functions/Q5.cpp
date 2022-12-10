#include<iostream>
#include<string>
using namespace std;


string lower(string low)
{
	int len=low.length();
	char ret[len];
	char array[len];
	for(int i=0;i<len; i++)
		{
			
		array[i]=low[i];
		if (array[i]<91 && array[i]>64)
		{
			ret[i]=array[i]+32;
			
		}
		else {
			ret[i]=array[i];
		}
			
		}	
	return ret;
	
}

int main()
{

	string sent;
	cout<<"Enter the Word ";
	cin>>sent;
	//sent = "DeCimAl";
	
	lower(sent);
cout<<lower(sent);

return 0;
}

