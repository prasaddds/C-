/*
c++ comes with libraries which helps us in performing input,output. in c++ 
sequence of bytes corresponding to input and output are commonly known as streams.
input streams:- direction of flow of bytes takes place from input device to main memory
output stream:- direction of flow of bytes takes place from main memory to output device
insrtion operator:-<<,used for printing op
exertion operator:->>,used for getting ip
keywords are reserved words and some special meaning is associated with keywords
*/
#include "iostream"
using namespace std;
int main()
{
	int a=5,b=6;
	int c=a/b;
	float f=a/b;
	float g=float(a)/float(b);
	cout<<g<<endl;
	cout<<f<<endl;
	cout<<c<<endl;
	cout<<a/b<<endl;
	cout<<"Hello world"<<endl;
}
//ss1
/*
1)airthematic operators:- +,-,*,/(quotient),%(remainder)
2)increament and decreament:- ++,--
3)assignment operator:- =
4)comparsion operators:- <,<=,>,>=,!=,==(prints 0/1)
5)Logical operators:- &&,||,!
6)Bitwise operators:- 
https://www.geeksforgeeks.org/difference-header-file-library/
*/
