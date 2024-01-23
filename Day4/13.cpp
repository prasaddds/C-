#include<iostream>
using namespace std;
class baseclass
{
	public:
		int x=10,y=20;
		void display()
		{
			cout<<x<<" "<<y<<endl;
		}
};
class derivedclass:public baseclass
{
	public:
		int a,b;
};
int main()
{
	derivedclass obj;
	obj.display();
	cout<<obj.a<<endl;
	cout<<obj.b<<endl;
	cout<<obj.x<<endl;
	cout<<obj.y<<endl;
	return 0;	
}
