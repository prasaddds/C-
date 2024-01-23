#include<iostream>
using namespace std;
class ABC{
	public:
		int x,y;
		void setData(int a,int b){
			cout<<a<<" "<<b<<endl;
		}
};
int main(){
	ABC obj;
	ABC *ptr=new ABC[4];
	int a,b;
	ABC *ptrtemp=ptr;
	for(int i=0;i<4;i++){
		cin>>a>>b;
		*ptr[i]->setData(a,b);
	}
	
	for(int i=0;i<4;i++){
		ptrTemp.setData(10,20);
	}
}

