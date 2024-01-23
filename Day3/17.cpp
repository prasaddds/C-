#include<iostream>
using namespace std;
class X//forward declaration is also necessary
{
	int data;
	public:
		void setdata(int value)
		{
			data=value;
		}
		friend void add(X,Y);
};
class Y
{
	int num;
	public:
		void setvalue(int value)
		{
			num=value;
		}
		friend void add(X,Y);
};
void add(X o1,Y o2)
{
	cout<<"summing datas of x and y gives me "<<o1.data+o2.num<<endl;
}
int main()
{
	X a1;
	a1.setdata(3);
	
	Y a2;
	a2.setvalue(5);
	return 0;
}
