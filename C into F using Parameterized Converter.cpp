#include<iostream>
using namespace std;

class Convert{
	 float C,F;
	 
     public:
     	convert(float celsius){
		C=celsius;
     	F=(C*9.0/5.0)+32;
		 }
     void display()
     {
     	cout<<"Celsius is: " <<C <<endl;
     	cout<<"Fahrenheit is: " <<F <<endl;
	 }
};
 int main()
   {
   	float C;
   	cout<<"Enter temperature in Celsius: ";
   	cin>>C ;
   	Convert converter(C);
   	converter.dislplay();
   	return 0;
   }

