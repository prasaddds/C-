#include<iostream>
using namespace std;
class complex;/*we are telling compiler that dont worry compiler, complex class is there later */
class calculator/*calculator class should be before complex class*/
{
	public:
		int add(int a,int b)
		{
			return a+b;
		}
		int sumRealcomplex(complex,complex);/*what is guanate that there is a?so only give protocol here*/
		int sumCompcomplex(complex,complex);
};
class complex
{
	int a,b;
	//individually declaring as functions
	friend int calculator::sumRealcomplex(complex o1,complex o2);//sumRealcomplex of class calculator can access m private data
	friend int calculator::sumCompcomplex(complex o1,complex o2);
	//how to declare entire class a friend
	//friend class calculator;
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
int calculator::sumRealcomplex(complex o1,complex o2)
{
	return o1.a+o2.a;
}
int calculator::sumCompcomplex(complex o1,complex o2)
{
	return o1.b+o2.b;
}
int main()
{
	complex o1,o2;
	o1.setNumber(1,2);
	o2.setNumber(3,4);
	calculator calc;
	int res=calc.sumRealcomplex(o1,o2);
	cout<<"sum of real part of o1,o2 "<<res<<endl;
	int resc=calc.sumCompcomplex(o1,o2);
	cout<<"sum of imag part of o1,o2 "<<resc<<endl;
	cout<<calc.add(1,2);	return 0;
}
