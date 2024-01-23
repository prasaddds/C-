#include<iostream>
using namespace std;
class Employee{
	public:
		int a=10,b=20;
		void Hello(){
			cout<<"Hello"<<endl;
		}
};
int main()
{
	Employee obj;
	cout<<obj.a<<endl;
	cout<<obj.b<<endl;;
	obj.Hello();
	return 0;
}
