#include<iostream>
using namespace std;
int sum(float a,int b)
{
	return a+b;
}
int sum(int a,int b,int c)
{
	return a+b+c;
}
int sum(int a,int b,int c,int d)
{
	return a+b+c+d;
}
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<sum(a,b)<<endl;
	cout<<sum(a,b,c)<<endl;
	cout<<sum(a,b,c,d)<<endl;
	cout<<sum(1.0,2.1)<<endl;
	return 0;
}
