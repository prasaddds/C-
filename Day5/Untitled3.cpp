#include<iostream>
using namespace std;
class A{
	public:
		void say(){
			cout<<"Say1"<<endl;
		}
};
class B:public A{
	public:
		void say(){
			cout<<"Say2"<<endl;
		}
};
int main(){
	B obj;
	obj.say();
}

