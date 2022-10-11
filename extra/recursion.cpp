#include<iostream>
using namespace std;
int sum (int n)
{
	return n== 0 ?  0
	:  n+sum(n-1);
}
int main()
{
	cout<<sum(3);
return 0;
}

