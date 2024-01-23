#include<iostream>
using namespace std;
class c2;
class c1
{
	int val;
	friend void exchange(c1 &,c2 &);
	public:
		void indata(int a)
		{
			val=a;
		}
		void display(void)
		{
			cout<<val<<endl;
		}
};
class c2
{
	int val2;
	friend void exchange(c1 &,c2 &);
	public:
		void indata(int a)
		{
			val2=a;
		}
		void display(void)
		{
			cout<<val2<<endl;
		}
};
void exchange(c1 &x,c2 &y)//this function can access data members of c1 and c2 as it is declared as a friend function. scoper resolution is not necessary
{
	int temp=x.val;
	x.val=y.val2;
	y.val2=temp;
}
int main()
{
	c1 obj1;
	c2 obj2;
	obj1.indata(34);
	obj2.indata(44);
	exchange(obj1,obj2);
	cout<<"value of c1 after exchange ";
	obj1.display();
	cout<<"value of c2 after exchange ";
	obj2.display();
	return 0;
}
