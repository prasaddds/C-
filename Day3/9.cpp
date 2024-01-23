#include<iostream>
using namespace std;
class Complex
{
	int a;
	int b;
	public:
	void setdata(int v1,int v2)
	{
		a=v1;
		b=v2;
	}
	void setDataBySum(Complex o1,Complex o2)
	{
		a=o1.a+o2.a;
		b=o1.b+o2.b;
	}
	void printNumber()
	{
		cout<<"you complex number is "<<a<<"+i"<<b<<endl;
	}
};
int main()
{
	Complex c1,c2,c3;
	c1.setdata(1,2);
	c1.printNumber();
	
	c2.setdata(3,4);
	c2.printNumber();
	
	c3.setDataBySum(c1,c2);//passing objects as function arguments
	c3.printNumber();
	return 0;
}
//refer untitled3.cpp
