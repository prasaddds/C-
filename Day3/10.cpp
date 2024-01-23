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
};

complex sumcomplex(complex o1,complex o2)
{
	complex o3;
	o3.setNumber(o1.a+o2.a,o1.b+o2.b);//invalid. How foreign function can use private data members?
	return o3;
}

int main()
{
	complex c1,c2,sum;
	c1.setNumber(1,2);
	c1.pn();//c1.sumcomplex will not run
	
	c2.setNumber(3,4);
	c2.pn();
	
	sum=sumcomplex(c1,c2);
	sum.pn();
	return 0;
}
