#include<iostream>
using namespace std;
//base class
class Employee
{
	int id;
	public:
		float salary;
		Employee(int inpId)
		{
			id=inpId;
			salary=34.0;
		}
};
//derived class
//class derived_class_name:Visibility_mode base_class_name;

int main()
{
	Employee harry(3),rohan(2);
	cout<<harry.salary<<endl;
	cout<<rohan.salary<<endl;
	return 0;
}
