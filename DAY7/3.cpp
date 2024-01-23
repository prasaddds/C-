#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string st;
	//opening file using constructor and reading from it
	ifstream in("sample2.txt");
	getline(in,st);//for getting whole content
	cout<<st<<endl;
	getline(in,st);
	cout<<st<<endl;
	getline(in,st);
	cout<<st<<endl;
	return 0;
}

