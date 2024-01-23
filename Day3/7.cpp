#include<iostream>
using namespace std;
class Employee
{
	int id;
	int salary;
	public:
		void setid(void)
		{
			cout<<"enter id ";
			cin>>id;
		}
		void getid(void)
		{
			cout<<" id is "<<id<<endl;
		}
}a1;
int main()
{
	Employee obj;
	obj.setid();
	obj.getid();
	Employee abc[5];
	abc[0].setid();
	abc[0].getid();	
	abc[1].setid();
	abc[1].getid();
	a1.setid();
	a1.getid();
	return 0;
}
