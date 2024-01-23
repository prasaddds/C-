#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream out;
	out.open("sample4.txt");
	out<<"This is me\n";
	out<<"this is also me";
	out.close();
	
	ifstream inn;
	string st,st2;
	inn.open("sample4.txt");
	while(inn.eof()==0)
	{
		getline(inn,st);
		cout<<st<<endl;
	}
	inn.close();
	return 0;
}
