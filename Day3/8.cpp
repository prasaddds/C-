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
};
int main()
{
	Employee obj;
	obj.setid();
	obj.getid();
	Employee abc[5];
	for(int i=0;i<5;i++)
	{
		abc[i].setid();
		abc[i].getid();
	}
	return 0;
}
