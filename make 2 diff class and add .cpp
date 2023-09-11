//program to make 2 class with single prrivate data member in each & add those data member & show the sum using necessary fxn method.
#include<iostream>
using namespace std;
class second;
class first{
	private:
		int a;
		void setvalue()
		{
			cout<<endl<<"Enter a:";
			cin>>a;
		}
		friend void sum(first,second);
}m;
class second{
	private:
		int b;
		void setvalue()
		{
			cout<<endl<<"Enter b:";
			cin>>b;
		}
		friend void sum(first,second);
}n;
void sum(first x,second y)
{
	int sum;
	sum=x.a+y.b;
	cout<<"The sum is:"<<sum;
}

