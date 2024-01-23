#include<iostream>
#include<fstream>//it also contains internal get and put stream
using namespace std;
int main()
{
	fstream file("sample13.txt",ios::out|ios::in);//contents of the file are removed because we are opening in the write mode
	if(!file.is_open())
	{
		cout<<"error"<<endl;
	}
	else
	{
		cout<<file.tellg()<<endl;//0
		cout<<file.tellp()<<endl;//0
		file.seekp(2);
		cout<<file.tellg()<<endl;//similarly getp() also available
		cout<<file.tellp()<<endl;
	}
	return 0;
}
