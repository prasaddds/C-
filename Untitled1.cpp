#include<iostream>
using namespace std;
class A
{
	public:
		int a;
	void set()
	{
		cout<<a<<endl;
	}
};
class B
{
	public:
         set();
};
int main()
{
	A obj;
	obj.a=10;
	B obj1;
	obj1.set();
	return 0;
}
/*
#include<iostream>
using namespace std;
class shop
{
	public:
		int counter;
};
class a:public shop
{
	
};
int main()
{

	return 0;
}
*/
