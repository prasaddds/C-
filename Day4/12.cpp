#include<iostream>
using namespace std;
class baseclass
{
	public:
		int x,y;
};
class derivedclass:public baseclass
{
	public:
		int a,b;
};
int main()
{
	derivedclass obj;
	cout<<obj.a<<endl;
	cout<<obj.b<<endl;
	cout<<obj.x<<endl;
	cout<<obj.y<<endl;
	return 0;	
}
