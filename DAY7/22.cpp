#include<iostream>
using namespace std;
/*
class templates with default parameters:-
*/
template <class T1=int,class T2=float>
class Harry
{
	public:
	T1 a;
	T2 b;
	Harry(T1 x,T2 y)
	{
		a=x;
		b=y;
	}
	void display()
	{
		cout<<a<<" "<<b<<endl;
	}	
};
int main()
{
	Harry<> h(4,4.6);
	h.display();

	Harry<float,int> h1(4.6,4);
	h1.display();
	return 0;
}
