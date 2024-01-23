#include<iostream>
using namespace std;
class number
{
	int a;
	public:
	number(){a=0;cout<<"Defa"<<endl;}//default constructor is mandatory
	number(int num)
	{
		a=num;
	}
	number(number &ob)//will work properly even this code is removed
	{//if copy constructor is not there, compiler will supply its own copy constructor
		cout<<"copy constructopr called"<<endl;
		a=ob.a;
	}
	void display()
	{
		cout<<"a's value is "<<a<<endl;
	}	
};
int main()
{
	number x,y,z(45),z2;//if all parameters are specified then default cosructor is not nneded
	x.display();
	y.display();
	z.display();
	number z1(x);//copy constructor invoked
	z1.display();
	z2=z;//copy constructor not called
	number z3=z;//copy constructor invoked
	z3.display();
	return 0;
}
//copy constructyor

