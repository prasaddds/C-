#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file("sample12.txt", ios::in | ios::out | ios::app);//new file will be created if file is not there
	if(!file.is_open())
	{
		cout<<"Error while opening the file"<<endl;
	}
	else
	{
		cout<<"file opened successfully"<<endl;
		cout<<"writing to file"<<endl;
		file<<" sdfjasdas dasd"<<endl;
		file.seekg(0);//setting pointer to starting for reading
		string line;
		while(!file.eof())//file.good()
		{
			getline(file,line);
			cout<<line<<endl;
		}
	}
	return 0;	
}
/*
->if only in,out are used as parameteres, and file is not there error
->ios::app means file pointer is pointing towards end of the file
->fstream:-get and put positions
->get():-from where next character should we read when next read operation occurs
->put():-from where next character should be written when next write operation occurs
*/
