#include<iostream>
using namespace std;
class Employee
{
	int id;
	static int count;//we cannot give value here
	public:
	void setdata()
	{
		cout<<"enter the id"<<endl;
		cin>>id;
		count++;
	}	
	void getdata()
	{
		cout<<"id is "<<id<<" count is "<<count<<endl;
	}
	static void getCount(void)
	{
		cout<<"value of count is "<<count<<endl;
//		cout<<id<<endl; non static data members are not allowed in static functions
	}
};
int Employee::count=1000;//dv is 0. we can allocate values here like, we can give 1000
int main()
{
	Employee o,a,b;
	o.setdata();
	o.getdata();
	Employee::getCount();//calling static function
	a.setdata();
	a.getdata();
	a.getCount();//calling static function
	b.setdata();
	b.getdata();
	a.getCount();//calling static function
	return 0;
}
