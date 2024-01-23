#include<iostream>
using namespace std;
//base class
class Employee
{
	public:
		int id;
		float salary;
		Employee(int inpId)
		{
			id=inpId;
			salary=34.0;
		}
		Employee(){}
};
//derived class
//private visibility mode: public members of the base class becomes private members of the derived class
//private members are never inherited
//class derived_class_name:Visibility_mode base_class_name;
///default visibility mode is private
//public visibility:- public member of the base class becomes public member of derived class
class programmer : public Employee
{
	public:
	int lcode=9;
	programmer(int inpId)
	{
		id=inpId;
	}
//	programmer(){}
	void getData()
	{
		cout<<id<<endl;
	}
};
int main()
{
	Employee harry(3),rohan(2);
	cout<<harry.salary<<endl;
	cout<<rohan.salary<<endl;
	programmer skillf(1);
	cout<<skillf.lcode<<endl;
	skillf.getData();
	return 0;
}
