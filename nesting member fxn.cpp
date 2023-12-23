#include<iostream>
using namespace std;

class Interest{
	private:
		int p,t,r,SI;
	public:
		void getdata()
		{
			cout<<"Enter value for P: "<<endl;
			cin>>p,t,r;
			cout<<"Enter value for ,R: "<<endl;
			cin>>r;
			cout<<"Enter value for T: "<<endl;
			cin>>t;
		}
		float calc()
		{
			SI=(p*t*r)/100;
			return SI;
		}
		
		void display()
		{
			cout<<"The SI is "<<calc();
			
		}
		
}interest;
int main()
{
	interest.getdata();
	interest.display();
	return 0;
}
