#include<iostream>
using namespace std;

class Employee{
	private:
		int id;
		string name;
		string position;
		float salary;
	public:
	   void getdata()
	   {
	   	 cout<<"Enter the Id: "<<endl;
	   	 cin>>id;
	   	 cout<<"Enter Name: "<<endl;
	   	 cin>>name;
	   	 fflush(stdin);
	   	 cout<<"Enter Position: "<<endl;
	   	 cin>>position;
	   	 fflush(stdin);
	   	 cout<<"Enter Salary: "<<endl;
	   	 cin>>salary;
	   }
	   void display_info()
	   {
	   	cout<<"The ID is "<<id<<endl;
	   	cout<<"The Name is "<<name<<endl;
	   	cout<<"The Position is "<<position<<endl;
	   	cout<<"The Salary is "<<salary<<endl;
	   }
};
int main()
{
	Employee Obj;
	Obj.getdata();
	Obj.display_info();
	return 0;
}
