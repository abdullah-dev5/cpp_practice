#include<iostream>
using namespace std;
int main()
{
char alpha ;
cout <<"Enter any Alphabet "<<endl;
cin>>alpha;

switch(alpha){
	case 'a':
	case 'A' :
		cout<<"vowel";
		break;
    case 'e':
	case 'E' :
		cout<<"vowel";
	break;
    case 'i':
	case 'I' :
		cout<<"vowel";
	break;
	case 'o':
	case 'O' :
		cout<<"vowel";
	break;
	case 'u':
	case 'U' :
		cout<<"vowel";
	break;
    default:
    	cout <<"consonant"<<endl;

}
	
return 0;
}

