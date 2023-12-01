//WAP with class interest where princple will be in private ,rate will be in protected and time will be in private.
// Now create two child class or derived class SI & Ci. 
//SI clas will be publicly inheritate where CI class will be inheritate in protected.Perform the necessary actions 
//to calcuate SI,CI. ( values should be dynamic )

#include<iostream>
using namespace std;
 
  class Interest{
  	 private:
  	 	float p;
  	 protected:
  	 	float r;
  	 public:
  	 	int t;
  	
  	void getdata()
  	{
  		cout<<"Enter value for p: "<<endl;
  		cin>>p;
  		cout<<"Enter value for t: "<<endl;
  		cin>>;
		cout<<"Enter value for r: "<<endl;
  		cin>>r;
  	 }
  	
  	int getp()
  	{
  		 return p;
	  }
    int gett()
	{
		return t;
	 }
	int getr()
	{
		return r;
	}  	 	
  };
class SI : public Interest{
   private:
    float si;
   public:
	void calculate ()
	{
		si= (t* r * getp())/100;
	}	
	void show()
	{
		cout<<"The value of SI: ";<<endl;

	}
};
class CI : protected Interest{
  private:
    float ci;
 
  public:
   void calculate()
   {
   	 ci=
	   }	
	
	
	void show()
	{
		cout<<"The value of CI: "<<endl;
		
	}
	
};
 int main()
 {
 	SI obj1;
 	CI obj2;
 	obj1.getdata();
 	obj1.calculate();
 	obj1.show();
    obj2.calculate();
	obj2.show();	
 	return 0;
 }
