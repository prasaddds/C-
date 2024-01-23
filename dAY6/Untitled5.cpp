#include<iostream>
using namespace std;
class Hello{
	public:
	int x,y;
	void setData(int a,int b){
		cout<<a<<" "<<b<<endl;
	}
};
int main(){
	Hello abc;
	Hello *ptr;
	ptr=&abc;
	abc.setData(10,20);
	ptr->setData(20,30);
	(*ptr).setData(40,50);
}

