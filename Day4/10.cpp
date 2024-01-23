#include<iostream>
using namespace std;
class baseclass
{
	public:
		int x,y;
		baseclass()
		{
			cout<<"baseclass"<<endl;
			x=10;
			y=20;
		}
};
class derivedclass:public baseclass
{
	public:
		int a,b;
		derivedclass()
		{
			cout<<"derived class"<<endl;
			a=30;
			b=40;
		}
};
int main()
{
	derivedclass obj;
	return 0;	
}
