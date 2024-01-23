#include<iostream>
using namespace std;
int &swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
	return a;
}
int main()
{
	int a=5,b=10;
	swap(a,b)=100;
	cout<<a<<" "<<b<<endl;
}
