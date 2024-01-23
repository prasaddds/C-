#include<iostream>
using namespace std;
class A;
class B{
	public:
		void sum(A,A);
};
class A{
	public:
		int a,b;
		void set(){
			cout<<"Enter values of a and b"<<endl;
			cin>>a>>b;
		}
		friend void B::sum(A,A);
};
void B::sum(A o1,A o2){
	cout<<o1.a+o2.a<<endl;
	cout<<o1.b+o2.b<<endl;
}
int main(){
	A obj1,obj2;
	obj1.set();
	obj2.set();
	B obj;
	obj.sum(obj1,obj2);
	return 0;
}
