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
