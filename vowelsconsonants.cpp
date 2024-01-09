#include<iostream>
#include<fstream>
using namespace std;

int main()
{   int v=0,sp=0,cons=0,no=0;
	char ch;
	fstream T;
	T.open("letter.txt",ios::out);
	if(!T)
	{
		cout<<"File not found";
		
	}
	T<<"He is a good boy re 123";
	T.close();
	
	T.open("letter.txt",ios::in);
	while (T.get(ch)) 
	{
			cout<<ch;
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
			{
				v++;
			}
			else if(ch==32)
			{
				sp++;
			}
			else if(ch>='0'&&ch<='9')
			{
				no++;
			}
			else 
			{
				cons++;
			}

	}
				
        
	cout<<endl<<"Total no. is "<<no<<endl;
	cout<<"Total Vowel. is "<<v<<endl;		
	cout<<"Total Consonant is "<<cons<<endl;
	cout<<"Total space is "<<sp<<endl;
	cout<<"Total no. of word is "<<sp+1;
	T.close();
	return 0;
}