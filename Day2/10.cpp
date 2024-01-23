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
	union money m1;
	m1.rice=20;
	cout<<m1.rice<<endl;
	m1.car='c';
	cout<<m1.rice<<endl;//wrong value because concept is all variables in c++ points to same variable
	cout<<m1.car<<endl;
	enum Meal{Breakfast,Lunch,Dinner};//starts from 0
	cout<<Breakfast<<endl;
	enum abc{as,df,gf};
	abc a1=gf;
	cout<<"a1 "<<a1<<endl;
	cout<<sizeof(abc)<<endl;
}
