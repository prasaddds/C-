#include<iostream>
using namespace std;
//base class
class Employee
{
	public:
		int id;
		float salary;
		Employee(int inpid)
		{
			id=inpid;
			salary=34.0;
		}
		Employee()
		{
			cout<<"Deafult constructor is called"<<endl;
		}
};
//derived class
//private visibility mode: public members of the base class becomes private members of the derived class
//private members are never inherited
class programmer : public Employee//default visibility mode is private
{
	public:
		programmer(int inpid)
		{
			id=inpid;
		}
		programmer(){
		}
	int languagecode=9;	
};
int main()
{
	Employee harry(1),rohan(2);
	cout<<harry.salary<<endl;
	cout<<rohan.salary<<endl;
	programmer skillf(1);
	//will go to programmar constructor. But it is derived from employee class, it will search for employee 
	//default constructor.so we should have default constructor for  employee 
}
