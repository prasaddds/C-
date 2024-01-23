#include<iostream>
using namespace std;
class Employe
{
	private:
		int a,b,c;
	public:
		int d,e;
		void setData(int f,int g,int h);
		void getData()
		{
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
		}
};
void Employe :: setData(int a1,int b1,int c1)
{
	a=a1;b=b1;c=c1;
}
int main()
{
	Employe obj;
	obj.d=100;
	obj.e=200;//private data members are not allowed using this syntax
	obj.setData(1,2,3);
	obj.getData();
//	cout<<obj.a<<endl; private data members cannot be accessed
	return 0;
}
