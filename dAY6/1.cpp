#include<iostream>
using namespace std;
int main()
{
	int a=4;
	int *ptr=&a;
	cout<<"the value of a is 4 "<<*ptr<<endl;//4
	//new keyword
	int *p=new int(40);
	*ptr=1111;
		cout<<*p<<endl;//40
	
	int *arr=new int[3];
	arr[0]=10;
	arr[1]=20;
	cout<<arr[0]<<" "<<endl;
	*(arr+0)=100;
	*(arr+1)=1000;//value at index 1 will be changed
	arr[2]=30;
	arr[3]=40;
	cout<<"0 "<<arr[0]<<endl;
	cout<<"1 "<<arr[1]<<endl;
	cout<<"2 "<<arr[2]<<endl;
	cout<<"3 "<<arr[3]<<endl;
	delete[] arr;
	return 0;
}
