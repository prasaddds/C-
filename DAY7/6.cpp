#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream out;//w
	out.open("sample4.txt");
	out<<"This is DurgaPrasad\n";
	out<<"this is also DurgaPrasad";
	out.close();
	
	ifstream inn;
	string st,st2;
	inn.open("sample4.txt");
	inn>>st>>st2;
	cout<<st<<" "<<st2;
	inn.close();
	return 0;
}
