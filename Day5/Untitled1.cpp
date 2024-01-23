#include<iostream>
using namespace std;
class A{
	public:
		void display(){
			cout<<"Display in A"<<endl;
		}
};
class B{
	public:
		void display(){
			cout<<"Display function inside class B"<<endl;
		}
};
class c:public A,public B{
	public:	
		void display(){
			A::display();	
		}
};
int main(){
	c obj;
	obj.display();
}

