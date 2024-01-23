#include<iostream>
using namespace std;
class A;
class B{
	public:
	int sumOfObj(A);
};
class A{
			friend int B:sumOfObj(A);
	public:
		int a,b,i1,i2;
};
int B::sumOfObj(A obj1){
	return obj1.a+obj1.b;
}
int main(){
	cout<<"Enter numbers A i1 B i2"<<endl;
	A obj;
	cin>>obj.a>>obj.b>>obj.i1>>obj.i2;
	B obj2;
	cout<<obj2.sumOfObj(obj);
}
