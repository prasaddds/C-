#include<iostream>
using namespace std;
class Democlass
{
	Democlass()
	{
		cout<<"object created"<<endl;
	}
	public:
		Democlass* createobject()
		{
			return (new Democlass);
		}
};
int main()
{
	Democlass *demoobject=NULL;
	demoobject=demoobject->createobject();
}
