//WAP create a class Student with data members for name,roll,marks. Create an array of student objects and display their results.
#include<iostream>
using namespace std;
class Student{
	private:
		char name[30];
		int roll;
		int marks;
	public:
		void getdata()
		{
			
					cout<<"Enter name of student: "<<endl;
					cin>>name;
					cout<<"Enter Roll no. of student: "<<endl;
					cin>>roll;
					cout<<"Enter marks of Student: "<<endl;
					cin>>marks;
		
		}
		void display()
		{
		
				cout<<"The name of student is: "<<name<<endl;
				cout<<"The Roll no. of student is: "<<roll<<endl;
				cout<<"The Marks of student is: "<<marks<<endl;	
			
		}	
};
int main()
{
    int i;
	Student obj[5];
    for(i=0;i<=4;i++)
	{
	   obj[i].getdata();
	  	
	}
	 for(i=0;i<=4;i++)
	{
	   obj[i].display();
	  	
	}
	return 0;
}
