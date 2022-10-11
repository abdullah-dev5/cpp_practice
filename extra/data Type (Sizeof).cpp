#include<iostream>
int main()
{
short numberSI;
 int numberI;
  long numberL;
   float numberF;
double numberD; 
char c;
std::cout<<" The size of short is "<<sizeof(numberSI)<<" bytes"<<std::endl; std::cout<<" The size of int is "<<sizeof(numberI)<<" bytes"<<std::endl;
std::cout<<" the size of long is "<<sizeof(numberL)<<" bytes"<<std::endl; std::cout<<" the size of float is "<<sizeof(numberF)<<" bytes"<<std::endl;
std::cout<<" the size of double is "<<sizeof(numberD)<<" bytes"<<std::endl; std::cout<<" the size of char is "<<sizeof(c)<<std::endl;

return 0;
}

