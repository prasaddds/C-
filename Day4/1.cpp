#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
		complex()
		{
			a=0;
			b=0;
			cout<<"default constructor is called"<<endl;
		}
		complex(int x,int y)//construtor overloading
		{
			a=x;
			b=y;
		}
		complex(int x)//constructor overloading
		{
			a=x;
			b=0;
			cout<<"constructor with only one parameter is called"<<endl;
		}
		void pn()
		{
			cout<<a<<"+i"<<b<<endl;
		}
};
int main()
{
//	complex obj; default constructor called 
	complex c1(3,4);//parameterized constructor called
	c1.pn();
	complex c2(3,0);//parameterozed constructor is called
	c2.pn();
	complex c3(4);
	c3.pn();
	complex c4;//default constructor called
	c4.pn();
	return 0;
}
