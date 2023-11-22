/* Program to convert from basic type to class type using operator overloading */

#include<iostream>
using namespace std;
class Time
{
	int hrs,min;
	public:
		void display();
		void operator=(int); // overloading function
};
void Time::display()
{
	cout<<hrs<< ": Hour(s) "<<endl ;
	cout<<min<<": Minutes"<<endl ;
}

void Time::operator=(int t)
{
	cout<<"Basic Type to ==> Class Type Conversion"<<endl;
	hrs=t/60;
	min=t%60;
}
void main()
{
	Time t1;
	int duration;
	cout<<"Enter time duration in minutes";
        cin>>duration;
	cout<<"object t1 overloaded assignment"<<endl;
	t1=duration;
	t1.display();
	cout<<"object t1 assignment operator 2nd method"<<endl;
	t1.operator=(duration);
	t1.display();
	return 0;
}
