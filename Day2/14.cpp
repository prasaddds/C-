#include<iostream>
using namespace std;
struct employe
{
	int id;
	int *ptr=&id;	
};
int main()
{
	struct employe emp1;
	emp1.id=10;
	cout<<emp1.id<<" "<<emp1.ptr<<endl;
}
