#include<iostream>
using namespace std;
class Base1
{
	int data1;
	public:
		Base1(int i)
		{
			data1=i;
			cout<<"base1 class constructor called"<<endl;
		}
		void printDataBase1(void)
		{
			cout<<"the value of data is "<<data1<<endl;
		}
};

class Base2
{
	int data2;
	public:
		Base2(int i)
		{
			data2=i;
			cout<<"base2 class constructor called"<<endl;
		}
		void printDataBase2(void)
		{
			cout<<"the value of data is "<<data2<<endl;
		}
};

class Derived:public Base1,public Base2//have effect if we change this
{
	int derived1,derived2;
	public:
		Derived(int a,int b,int c,int d):Base2(b),Base1(a)//no effect even if we change this order
		{
			derived1=c;
			derived2=d;
			cout<<"derived class constructor called\n";
		}
		void printDataDerived(void)
		{
			cout<<"the value of data is "<<derived1<<" "<<derived2<<endl;
		}
};
int main()
{
	Derived harry(1,2,3,4);
	harry.printDataBase1();
	harry.printDataBase2();
	harry.printDataDerived();
	return 0;
}
/*
Case1:- 
class B:public A//first base class,then derived class
{
	order of execution of constructor->first A() then B()
};

Case2:-
class A:public B,public C//multiple inheritence, depends on which one is inherited first
{
	//order of execution of constructor first B(),then C(),then A()
};

Case3:-
class A:public B,virtual public C
{
	//order of execution of constructor first C(),then B(),then A()
};


*/
