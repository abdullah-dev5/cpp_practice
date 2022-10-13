  
  /**
  Write a program that should ask the user to input an integer number and print 
whether it is even or odd.
  

  
  **/
  #include<iostream>


using namespace std ;

int main ()
{

int num;
cout<<"Enter any number .. "<<endl;
cin>>num;

switch(num%2)
{	
	case 0:
     cout<<"Even"<<endl;
     break;
     
	default:
		cout<<"ODD"<<endl;
}
return 0 ;
}


