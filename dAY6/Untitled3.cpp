#include<iostream>
using namespace std;
int main(){
	int a=10;
	int *ptr=&a;
	cout<<a<<" "<<*ptr<<endl;
	*ptr=100;
	cout<<a<<" "<<*ptr<<endl;
	
	
	int *arr=new int[4];
	*(arr+0)=20;
	cout<<arr[0]<<endl;
}

