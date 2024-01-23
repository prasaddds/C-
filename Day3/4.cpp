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
};
int Employee::count=100;//dv is 0. we can allocate values here like, we can give 1000
int main()
{
	Employee o,a,b;
	o.setdata();
	o.getdata();
	a.setdata();
	a.getdata();
	b.setdata();
	b.getdata();
	return 0;
}
