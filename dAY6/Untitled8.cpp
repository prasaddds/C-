#include<iostream>
using namespace std;
class A{
	int x;
	public:
		virtual void def()=0;
		 void abc(int y){
			cout<<"y is "<<y<<endl;
		}
};
class B:public A{
	int z;
	public:
		void def(){
			cout<<"def"<<endl;
		}
		void abc(int a){
			cout<<"a is "<<a<<endl;
		}
};
int main(){
	A obj;
	A *obj1;
	B obj2;
	B *obj3;
	obj1=&obj2;
	
	obj1->abc(10);
	
	
}

