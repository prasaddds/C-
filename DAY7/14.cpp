#include<iostream>
#include<fstream>//it also contains internal get and put stream
using namespace std;
int main()
{
	ofstream file("sample13.txt",ios::out);//contents of the file are removed because we are opening in the write mode
	if(!file.is_open())
	{
		cout<<"error"<<endl;
	}
	else
	{
		cout<<file.tellp()<<endl;//to get put position-write. tellp->out->writing
		file<<"sadfasd sfd"<<endl;
		cout<<file.tellp()<<endl;//position of tellp is at the end
		file.seekp(5);//changing put position seekp(5,ios::beg),end,curr
		file<<"and asd d as";
		cout<<file.tellp()<<endl;
	}
	return 0;
}
