/*
int,float,char,double,boolean-datatypes tells about which kind of values will be stored inside that variable
Based on scope variables can be classified into two types: local,global
scope of a variable is a region where the exisstence of  variable is valid
Local variables:- these are declared insidi braces of any function and can be accessed only from there
Global variables:- these are declared outside any function and can be accessed from anywhere
Datatype defines the type of data  a variable can hold, for example integer variable can hold integer data
datatypes are of three types:- built in(int,float,double,char,bool), user-defined(struct,union,enum),
derived(array,functions,pointers)
*/
#include<iostream>
using namespace std;
int main()
{
	int a=4;
	int b=5;
	float pi=3.14;
	char c='u';
	cout<<"the value of c is "<<c<<endl;
	cout<<"the value of pi is "<<pi<<endl;
	cout<<"value of a is "<<a<<" value of b is "<<b<<endl;
	return 0;
}
