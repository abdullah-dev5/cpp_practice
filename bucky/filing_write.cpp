#include<iostream>
#include <fstream>

using namespace std;

int main()
{
	int score;
	ofstream fileObj("score.txt");
	cout<<"enter score"<<endl;
	for(int i=0; i<5; i++)
	{
		cin>>score;
		fileObj<<score << " ";
		 
	}
	fileObj.close();


return 0;
}

