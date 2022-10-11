#include<iostream>
using namespace std;
int main()
{
int a,b;
char opt;
cout<<"ENTER ANY NUMBER:"<<endl;
cin>>a;
cout<<"ENTER 2ND NUMBER:"<<endl;
cin>>b;
cout<<"ENTER OPERATION (+, -, *, /)"<<endl;
cin>>opt;
switch(opt)
{
	case '+':
		cout<<"YOUR ADDTITION IS:"<<a+b<<endl;
	break;
	case '-':
		cout<<"YOUR SUBTRACTION IS:"<<a-b<<endl;
		break;
		case '*':
			cout<<"YOUR MULTIPLICATION IS:"<<a*b<<endl;
			break;
			case '/':
				cout<<"YOUR DIVISION IS:"<<a/b<<endl;
				break;
				default:
				cout<<"WRONG OPERATION:"<<endl;
}


return 0;
}

