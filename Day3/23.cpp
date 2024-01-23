#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
	complex(void);
	void printNumber()
	{
		cout<<"value of a is "<<a<<" value of b is "<<b<<endl;
	}
};
complex::complex(void)
{
	a=0;
	b=0;
	cout<<"saf"<<endl;
}
int main()
{
	complex a;
	a.printNumber();
	return 0;
}
