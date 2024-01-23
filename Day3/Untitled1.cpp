#include<iostream>
using namespace std;
class B;
class A{
	int a1,b1;
	public:
		int calculation(A);
};
class B{
	int a2,b2;
	public:
		friend int A::calculation(A o1);
};
int A::calculation(B o1){
	return o1.a1+o1.b1;
}
int main(){
	A obj;
	obj.a1=10;
	obj.b1=20;
	cout<<obj.calculation(obj)<<endl;
}

