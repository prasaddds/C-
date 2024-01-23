/*
by defaulr read or write
file reading modes:-defined in ios-base,ios:in 
a)ios:in:-read mode by default
b)ios:out:-for writing
c)ios:trunk:-
d)ios:app:-used with out mode
e)ios:ate:-
f)ios:binary:-
*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file;
	file.open("sample5.txt",ios::in | ios::out);//error if file is not there 
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
