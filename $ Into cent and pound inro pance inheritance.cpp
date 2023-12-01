//WAP  with two parent classes A & B. Both parent class should have use of all three excess specifiers.
// Class A should contain info of money in terms of $ and cents.
// Class B will contain interms of pounds & pance. Now use concept of inheritance to add both amount & convert into NRs.


 #include<iostream>
 using namespace std;

 class A{
    private:
	   float Dollar;	
	protected:
	   float cent;
	public:
	  void getdata()
	  {
	  	cout<<"Enter the value for Dollar: ";
	  	cin>>Dollar;
	  	cout<<"Enter the value for Cent: ";
	  	cin>>cent;
	  }
 };
 class B{
    private:
	   float pound;	
	protected:
	   float pance;
	public:
	  void getdata2()
	  {
	  	cout<<"Enter the value for Pound: ";
	  	cin>>Dollar;
	  	cout<<"Enter the value for Pance: ";
	  	cin>>cent;
	  }
 	
 	
 };
 class C: 
 int main()
 {
 	A.obj1;
 	B.obj2;
 	obj1.getdata();
 	obj2.getdata2();
 }
