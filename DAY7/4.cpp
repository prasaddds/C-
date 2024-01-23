#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	//connecting our file with hout stream
	ofstream oout("sample3.txt");
	string name;
	
	
	cout<<"enter you name"<<endl;
	cin>>name;
	
	//writing string to file
	oout<<"My name iss "+name;
	oout.close();
	
	
	ifstream hin("sample3.txt");
	string content;
	getline(hin,content);
	cout<<"the content of this file \n"<<content;
	return 0;
}
