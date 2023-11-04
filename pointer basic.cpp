#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int *b=&a;
	cout<<"The value at adress of b is" <<*b<<endl;
	return 0;
}
