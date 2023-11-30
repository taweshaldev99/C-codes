//WAP with class interest where princple will be in private ,rate will be in protected and time will be in private.
// Now create two child class or derived class SI & Ci. 
//SI clas will be publicly inheritate where CI class will be inheritate in protected.Perform the necessary actions 
//to calcuate SI,CI. ( values should be dynamic )


#include<iostream>
#include<math.h>
using namespace std;
   class Interest {
   	 private:
   	   int p;
   	
	    protected:
	   int r;
	 
	 public:
       int t;
       int getP()
       {
       	 return p;
	   }
	 void getinput(){
	   cout<<"Enter the value of P: "<<endl;
	   cin>>p;
	   cout<<"Enter the value of T: "<<endl;
	   cin>>t;
	   cout<<"Enter the value of R: "<<endl;
	   cin>>r;
	 }		 
   };
    class SI : public Interest {
   	
   	public:
   	
	 float simple_interest;
	  	int getR()
   		{
   			return r;
		   }
     void SIoutput(){
   		
		   simple_interest=(p*t*r)/100;
   	
	   cout<<endl<<"The value of SI: "<<simple_interest;	
	   }		   
   }J;
    class CI : protected Interest{
   	public:
    // function to access protected member from Base
    int getProt() {
      return r;
    }
    // function to access public member from Base
    int getPub() {
      return p;
    }
   	  float compound_interest,x,z;
   	   
   	    void CIoutput()
   	    {
   	        compound_interest=p * pow((1 + r / 100), t) -p;	
		}
   	   cout<<endl<<"The value of CI: "<<compound_interest;
   	   
   }T; 
  int main()
  {
  	J.getR();
  	T.getProt();
  	T.getPub();
  	return 0;
  }
   
