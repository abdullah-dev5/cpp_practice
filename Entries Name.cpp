#include<iostream>
using namespace std;
int main()
{

int limit ;
cin>> limit;
cout<<"Enter the limit"<<endl;

 string names[limit];
for(int i=0;i<limit;i++) 
{cout<<"Enter the names"<<(i+1)<<endl;
cin>>names[i];

}
cout << "Entered names"<<endl;
for(int i=0;i<limit;i++)
{cout <<names[i]<<endl;
}
return 0;
}

