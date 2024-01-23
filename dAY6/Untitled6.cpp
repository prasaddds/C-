#include<iostream>
using namespace std;
class abc{
	public:
		int x,y;
		void setData(int a,int b){
			cout<<a<<" "<<b<<endl;
		}
};
int main(){
	abc *ptr=new abc[4];
	ptr[0].setData(30,40);
	ptr[1].setData(40,50);
	ptr[2].setData(60,70);
	return 0;
}

