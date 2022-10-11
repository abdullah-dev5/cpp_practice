#include<iostream>
#include <cstdlib> // we added this lib cuz we are using  rand (random).
#include <ctime> /***we added this lib cuz we are using time.it counts 
every single seconds passed since 1970s***/ 
using namespace std;
int main()
{

	
	srand(time(0)); // srand = seed random 
	 // time helps us to generate everytime random numbers 
for (int x=1; x <= 6 ; x++){
cout<<1+(rand()%6)<<endl;
}

return 0;
}

