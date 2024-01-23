#include<iostream>
using namespace std;
int c=45;
int main()
{
	int a,b,c;
	cin>>a>>b;
	
	c=a+b;
	cout<<c<<endl;
	cout<<::c<<endl;
	::c=::c+10;//we can perform all kinds of operation on this global variable
	cout<<::c<<endl;
}
//scope resolution operator used to get the values of global variables
//inside a local function 
//globals variables can be dirtectly accessed in local function if there is no variable with same name inside 
//local function. but if it is not so, we have to use scope resolution operator
