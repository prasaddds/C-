#include<iostream>
using namespace std;
class Hello{
		int x,y;
	public:
		void getData(int a,int b){
			x=a;
			y=b;
			cout<<a<<" "<<x<<" "<<b<<" "<<y<<endl;
		}
};
int main(){
	Hello abc;
	Hello *poi;
	poi=&abc;
	abc.getData(10,20);
	return 0;
}
