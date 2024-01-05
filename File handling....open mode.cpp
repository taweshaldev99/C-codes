#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream obj1;
	obj1.open("obj1",ios::out);
    
    if(!obj1)
	{
    	cout<<"File not found"<<endl;
    	
	}
	else
	{
		cout<<"File opened successfully"<<endl;
		cout<<"First text";
		obj1.close();
	}
	return 0;
}
