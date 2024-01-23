#include<iostream>
using namespace std;
class base1
{
	public:
		int a=10;
	void greet()
	{
		cout<<"How are you"<<endl;
	}		
};
class base2
{
	public:
		int a=20;
		void greet()
		{
			cout<<"sgf sdf"<<endl;
		}
};
class derived:public base1,public base2
{
	int a;
	public:
		void greet()//ambiguity resolvance
		{
			base2::greet();
			base1::a;
			cout<<base1::a<<endl;
		}
};
int main()
{
	base1 base1obj;
	base1obj.greet();
	base2 base2obj;
	base2obj.greet();
	derived obj;
	obj.greet();//ambiguity
}
