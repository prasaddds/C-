#include<iostream>
using namespace std;

class X
{
	int a;
	public:
		X(int i=0){
			a=i;
		}
		void show(){
			cout<<a<<endl;
		}
};
class Y
{
	X x;
	public:
		Y(int j=0){
		}
		void show(){
			x.show();
		}
};
int main(){
	Y obj(100);
	obj.show();
	return 0;
}
