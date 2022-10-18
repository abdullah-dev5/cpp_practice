#include<iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	int num;
    srand(time(0));
		int guess = (rand()%100)+1;
		bool won = false;
		int counter = 0;
		while(counter<5)
		{
			counter++;
			cin>>num;
			if(num>guess)
			{
				cout<<"You number is greater"<<endl;
			}
			else if(num<guess)
			{
				cout<<"You number is less"<<endl;	
			}
			else
			{
				won = true;
				cout <<"wahoo! you guessed it  "<<endl;
				break;
			}
		}
		if(won==true)
		{
			cout<<"congrats"<<endl;
		}
		else
		{
			cout<<"\n";
			cout<<"********************************"<<endl;
			cout<<" sorry you should admire that you are loser"<<endl;
		}


return 0;
}

