#include<iostream>
using namespace std;
 
  int c=34; //global variable

int main()
  {
  	 int a ,b,c;
  	 cout<<"Enter value of a: "<<endl;
  	 cin>>a;
  	 cout<<"Enter value of b: "<<endl;
  	 cin>>b;
  	 c=a+b;
  	 cout<<"The sum is "<<c<<endl;     //displaying sum 
  	 cout<<"The value of c is "<<::c;  //displaying vlaue of global variable
  	 return 0;
  	 
  }
