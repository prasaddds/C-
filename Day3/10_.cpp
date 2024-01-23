#include<iostream>
using namespace std;
class complex
{
	int a,b;
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
		friend complex sumcomplex(complex o1,complex o2);
		//oye mr.compiler, he is my friend. allow him to access private data
};

complex sumcomplex(complex o1,complex o2)
{
	complex o3;
	o3.setNumber(o1.a+o2.a,o1.b+o2.b);
	return o3;
}

int main()
{
	complex c1,c2,sum;
	c1.setNumber(1,2);
	c1.pn();
	
	c2.setNumber(3,4);
	c2.pn();
	
	sum=sumcomplex(c1,c2);
	sum.pn();
	return 0;
}
