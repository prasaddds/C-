#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
		void setNumber(int n1,int n2)
		{
			a=n1;
			b=n2;
		}
		void printNumber()
		{
			cout<<a+"i"<<b<<endl;

		}
		friend complex SumComplex();
};
complex::complex SumComplex()
{
	complex a;
	return a;
}
int main()
{
	complex c1,c2;
	c1.setNumber(5,6);
	c1.printNumber();
	return 0;
}
