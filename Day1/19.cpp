#include<iostream>
using namespace std;
int main()
{
	int a=40;
	cout<<std::showbase;
	cout<<std::oct;
	cout<<a<<endl;
	cout<<std::hex;
	cout<<a<<endl;
	cout<<std::showpos;
	cout<<std::dec<<endl;
	cout<<"After showpos "<<a<<endl;
	cout<<std::uppercase;
	cout<<a<<endl;
	
}
//showbase
//noshowbase
//showpos
//noshowpos
//uppercase
//nouppercase


//setw(5)
//setfill('*')
//std::left
//std::right
//std::left,right,fill work only if we have some width
