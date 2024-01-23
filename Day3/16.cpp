#include<iostream>
using namespace std;
class X
{
	int data;
	public:
		void setdata(int value)
		{
			data=value;
		}
};
class Y
{
	int data;
	public:
		void setvalue(int value)
		{
			data=value;
		}
};
void add(X o1,Y o2)
{
	cout<<"summing datas of x and y gives me "<<o1.data+o2.data<<endl;/*Private values cannot be accessed*/
}
int main()
{
	
}
