#include<iostream>
using namespace std;

int main()
{
	int *pointvar;        //declaring point int variable;
	
	pointvar= new int;    //dynamically allocate memory
	
	*pointvar= 45;         //assigning vakue
	 
	
	cout<<*pointvar <<endl;
	
	delete pointvar;      //deallocate memory space

	return 0;
}

// Output:
//	45
