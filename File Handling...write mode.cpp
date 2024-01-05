#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	 fstream T;
	 T.open("File.txt",ios::out);       //File is the name of file created in txt mode
	 if( !T)                            // T is the object of the stream i.e fstream
	 {
	 	cout<<"File not Found";
	 }
	 else
	 {
	 	cout<<"File Opened Successfully";
	 	T<<"First words on the File"<<endl; 
	 }
	 return 0;
}
