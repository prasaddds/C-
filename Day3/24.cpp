#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
	complex(int,int);
	void printNumber()
	{
		cout<<"value of a is "<<a<<" value of b is "<<b<<endl;
	}
};
complex::complex(int x,int y)//parameterized
{
	a=x;
	b=y;
	cout<<"saf"<<endl;
}
int main()
{
	complex a(4,6);//implicit call
	
	complex b=complex(5,7);//explicit call
	a.printNumber();
	b.printNumber();
	return 0;
}
