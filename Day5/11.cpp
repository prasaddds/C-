#include<iostream>
using namespace std;
class test
{
	int a;
	int b;
	public:
		test(int i,int j):a(i),b(j)//b(i+j) allowed,b(2*j) allowed
		{
			cout<<"coonstructor called"<<endl;
			cout<<a<<" "<<b<<endl;
		}
};
int main()
{
	test t(4,6);
	return 0;
}
/*
syntax for initialization list in constructor:
constructor(argument-list):intitialization section
{
	assignment + other code
}

class test
{
	int a;
	int b;
	public:
		test(int i,int j):a(i),b(j){constructor-body};
};
*/
