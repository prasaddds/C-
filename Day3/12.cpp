#include<iostream>
using namespace std;
class calculator/*calculator class should be before complex class*/
{
	public:
		int add(int a,int b)
		{
			return a+b;
		}
		int sumRealcomplex(complex o1,complex o2)/*what is guarantee that complex class is there below?*/
		{
			return o1.a+o2.a;
		}
};
class complex
{
	int a,b;
	friend int calculator::sumRealcomplex(complex o1,complex o2);
	public:
		void setNumber(int n1,int n2)
		{
			a=n1;
			b=n2;
		}
		void pn()
		{
			cout<<"number is "<<a<<"+i"<<b<<endl;
		}
};
int main()
{
	
	return 0;
}
