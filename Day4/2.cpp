#include<iostream>
using namespace std;
class simple
{
	int data1;
	int data2;
	public:
		simple(int x,int y=9)
		{
			data1=x;
			data2=y;
		}
		void pn();
};
void simple::pn()
{
	cout<<data1<<"+i"<<data2<<endl;
	
}
int main()
{
	simple a(1,4);
	a.pn();
	simple b(1);
	b.pn();
	return 0;
}
//constructor with defualt argumets
