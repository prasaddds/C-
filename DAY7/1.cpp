#include<iostream>
#include<fstream>
/*
1)fstreambase:-
2)ifstream:- derived from fstreambase
3)ofstream:-derived from fstreambase
In order to work with files u will have to open it. There are two ways to open a file:-
a)using constructor
b)using member function open() in the class
*/
using namespace std;
int main()
{
	string st="Harry bhai";
	//opening file using constructor and writing to file
	ofstream out("sample.txt");
	out<<st;
	return 0;
}

