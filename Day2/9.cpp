#include<iostream>
using namespace std;
union money
{
	int rice;
	char car;
	float pounds;
};
int main()
{
	 money m1;
	m1.rice=20;
	cout<<m1.rice<<endl;//20
	m1.car='c';
	cout<<m1.rice<<endl;//wrong value because concept is all variables in c++ points to same variable
	cout<<m1.car<<endl;//c
	cout<<m1.car<<endl;//c
}
