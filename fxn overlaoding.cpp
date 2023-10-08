#include<iostream>
using namespace std;

  void add(int a, int b)
  {
  	cout<<endl<<"Sum= "<< (a+b);
  }
  void add(int a, int b,double c)
  {
  	cout<<endl<<"Sum= "<< (a+b+c);
  }
int main()
  {
  	add(2,9);
  	add(9,23,45.56);
  	
  	return 0;
  }
