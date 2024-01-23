#include<iostream>
#include<fstream>//it also contains internal get and put stream
using namespace std;
int main()
{
	ifstream file("sample13.txt",ios::in);//file should be there
	if(!file.is_open())
	{
		cout<<"error"<<endl;
	}
	else
	{
		cout<<file.tellg()<<endl;//tells about the position, 0 by default
		string line;
		file.seekg(2);//setting pointer to second position
		getline(file,line);
		cout<<line<<endl;
	}
	return 0;
}
