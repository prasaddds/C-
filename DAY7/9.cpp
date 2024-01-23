
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file;
	file.open("sample5.txt",ios::in | ios::out | ios::trunc);//creates file, if file is not there and remove conent if file is there
	if(!file.is_open())
	{
		cout<<"error while opening file"<<endl;
	}
	else
	{
		cout<<"file opened successfully"<<endl;
		file.close();
	}
	return 0;
}
