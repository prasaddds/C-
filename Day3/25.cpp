#include<iostream>
using namespace std;
class point
{
	int x,y;
	public:
	point(int a,int b)
	{
		x=a;
		y=b;
	}	
	void displayPoint()
	{
		cout<<"point is "<<x<<" "<<y<<endl;
	}
};
int main()
{
	point p(2,5);
	p.displayPoint();
	point q(4,6);
	q.displayPoint();
}
