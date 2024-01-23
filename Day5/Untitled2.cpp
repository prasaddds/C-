#include<iostream>
using namespace std;
class A{
	int a;
	public:
		void display(){
			cout<<"Display in class A"<<endl;
		}
};
class B:public A{
	int b;
	public:
		void display(){
			cout<<"Example for overriding in class B"<<endl;
		}
};
int main(){
	B obj;
	obj.display();
	return 0;
}

