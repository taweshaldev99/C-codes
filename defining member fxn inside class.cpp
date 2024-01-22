#include<iostream>
using namespace std;

class T{
	private:
		int a;
		char name[100];
	public:
		void getdata()
		{
			cout<<"Enter your name: "<<endl;
			cin.getline(name,100);
		}
		void display_info()
		{
			cout<<"The name is "<<name;
		}
		}obj;
int main()
{
	
	obj.getdata();
	obj.display_info();
	return 0;
}
