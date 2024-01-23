#include<iostream>
using namespace std;
class base1
{
	public:
	void greet()
	{
		cout<<"How are you"<<endl;
	}		
};
class base2
{
	public:
		void greet()
		{
			cout<<"sgf sdf"<<endl;
		}
};
class derived:public base1,public base2
{
	int a;
	public:
		void greet()//ambiguity resolvance. This can happen not only with member functions but with also data members
		{
			base1::greet();
		}
};
class B
{
	public:
		void say()
		{
			cout<<"hello world"<<endl;
		}
};
class D
{
	public:
		void say()
		{
			cout<<"hello world my beautiful people"<<endl;
		}
};
int main()
{
	B obj;
	obj.say();//no ambiguity in this case
	D obj1;
	obj1.say();
	return 0;
}
