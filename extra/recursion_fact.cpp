#include<iostream>
using namespace std;
int fact (int n)
{
	return n== 1 ?  1
	:  n*fact(n-1);
}
int main()
{
	cout<<fact(4);
return 0;
}

