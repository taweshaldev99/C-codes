#include<iostream>
#include<stdlib.h>
using namespace std;
 
 class Student{
 	private:
 		int roll;
 		int age;
 		string name;
 		string address;
 	public:
 		Student()
 		{
 			cout<<"Enter roll: "<<endl;
 			cin>>roll;
 			cout<<"Enter age: "<<endl;
 			cin>>age;
			cout<<"Enter Name: "<<endl;
 			cin>>name;
 			fflush(stdin);
 			cout<<"Enter Address: "<<endl;
 			cin>>address;
 			fflush(stdin);
		 }
	  void display()
	  {
	  	cout<<"The roll_no of stduent is: "<<roll<<endl;
	  	cout<<"The Age of stduent is: "<<age<<endl;
	  	cout<<"The Name of stduent is: "<<name<<endl;
	  	cout<<"The Address of stduent is: "<<address<<endl;
	  }
 };
int main()
{
	Student obj1;
	obj1.display();
	return 0;
}
