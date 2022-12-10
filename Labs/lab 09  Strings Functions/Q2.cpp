#include<iostream>
#include<string>
using namespace std;

int function(string sent)
{
	
	int len;
	len=sent.length();
char charc[len];//the purpose of declaring this array is to convert sting into char array. 
int num=1;
for(int i=0; i<len;i++)
{
	charc[i]=sent[i];
	if (charc[i]==32)//Ascii Code of space is 32
	{	
		num+=1;//every time when space finds in array it will true the if statement 
		//and one will be added into the num;
	}

}

  return num;
   }




int main()
{
	int  len;
	string sentence;
	cout << "Enter sentence  ";
	getline (cin,sentence);

	cout<<function(sentence);

return 0;
}

