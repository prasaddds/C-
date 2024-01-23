#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string st;
	//opening file using constructor and reading from it
	ifstream inn("sample2.txt");
	inn>>st;
	cout<<st;//but we are not getting whole content
	return 0;
}

