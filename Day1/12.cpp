#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	/*manipulators*/
	int a=3,b=78,c=1233;
	cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
	cout<<setw(4)<<a<<"\n"<<setw(4)<<b<<"\n"<<setw(4)<<c<<"\n";
	cout<<setw(2)<<5<<endl;
	/*operator precedence[which operator should be performed first],
	associativity[which operator should be performed first when more than one operator in an expression has same precedence]*/
	
	return 0;
}
/*
Manipulators are helping functions that can modify the input/output stream. It does not mean that we change the value of a variable, 
it only modifies the I/O stream using insertion (<<) and extraction (>>) operators.
EX:-cout<<setbase(16)<<100
*/
