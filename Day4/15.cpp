#include<iostream>
using namespace std;
class base
{
	int data1;//not inheritable directly
	public:
		int data2;
		void setdata();
		int getdata1();
		int getdata2();
};
void base::setdata()
{
	data1=10;
	data2=20;
}
int base::getdata1()
{
	return data1;
}
int base::getdata2()
{
	return data2;
}
class derived : public base
{
	int data3;
	public:
		void process();
		void display();
};
void derived::process()
{
	data3=data2*getdata1();
}
void derived::display()
{
	cout<<"value of data1 is "<<getdata1()<<endl;//data1 is private data
	//we are indirectly accessing them using function
	cout<<"value of data1 is "<<data2<<endl;
	cout<<"value of data1 is "<<data3<<endl;
}
int main()
{
	derived der;

	der.setdata();
	der.process();
	der.display();
	return 0;
}
