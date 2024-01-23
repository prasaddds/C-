#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
//	creating constructor
//	constructor is a special member function with same name as the class.
//	it is used to initialize the objects of its class
//	automatically invoked when object is created
//	no return type
	complex(void);//constructor declarartion
//	this is default constructor coz, it is not taking any parameters
//	should be in public 
//	constructor can have default arguments
//	we cannot refer to their addresses
	void printNumber()
	{
		cout<<"value of a is "<<a<<" value of b is "<<b<<endl;
	}
};
complex::complex(void)
{
	a=10;
	b=0;
	cout<<"saf"<<endl;
}
int main()
{
	complex c1,c2,c3;
	c1.printNumber();
	c2.printNumber();
	c3.printNumber();
	return 0;
}
