#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	//connecting our file with hout stream
	ofstream houtt("sample3.txt");
	string name;
	
	
	cout<<"enter you name"<<endl;
	cin>>name;
	
	//writing string to file
 houtt<<name + " is my name";
	houtt.close();
	
	
	ifstream hin("sample3.txt");
	string content;
	hin>>content;
	cout<<"the content of this file "<<content;
	hin.close();
	return 0;
}
