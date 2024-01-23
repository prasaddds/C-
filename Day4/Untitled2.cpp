#include<iostream>
using namespace std;
class A{
	int z;
	public:
		A(){
			cout<<"Default Constructor"<<endl;
		}
		A(int x){
			z=x;
			cout<<"Entered value is "<<z<<endl;	
		}
};
int main(){
	A obj(10);
	return 0;
}
