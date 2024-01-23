#include<iostream>
#include<string>
using namespace std;
class binary
{
	string s;//by default private
	void chk_bin();
	public:
		void read();
		void ones();
		void display();
};
void binary :: read()
{
	cout<<"enter name"<<endl;
	cin>>s;
}
void binary :: chk_bin()
{
	for(int i=0;i<s.length();i++)
	{
		if(s.at(i)!='0' && s.at(i)!='1')
		{
			cout<<"incorrect binary format"<<endl;
			exit(0);
		}
	}
}
void binary :: ones()
{
	chk_bin();//will work even this function is in private
	for(int i=0;i<s.length();i++)
	{
		if(s.at(i)=='0')
		{
			s.at(i)='1';
		}
		if(s.at(i)=='1')
		{
			s.at(i)='0';
		}
	}
}

void binary::display()
{
	cout<<"displaying"<<endl;
	for(int i=0;i<s.length();i++)
	{
		cout<<s.at(i)<<" ";
	}
}

int main()
{
	binary b;
	b.read();	
//	b.chk_bin(); not allowed if it is in private although it is a nested member fucnctions
	b.ones();
	b.display();
	return 0;
}
//classes -extension of structures
//structures have some limitations:- all data members are public
//classes can have data members and member functions
//classes can make few members as public and private
//we can declare objects along with class declaration-not recomended
//structures in c++ are typedefed
//
