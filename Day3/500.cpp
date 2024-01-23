#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		void setdata(int v1,int v2)
		{
			a=v1;
			b=v2;
		}
		friend A abc(A o1,A o2);
};
A abc(A o1,A o2)
{
	A o3;
	o3.setdata(o1.a+o2.a,o1.b+o2.b);
	return o3;
}
int main()
{
	A obj1,obj2,sum;
	obj1.setdata(5,3);
	obj2.setdata(6,7);
	sum=abc(obj1,obj2);
	return 0;
}
