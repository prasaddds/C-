#include<iostream>
using namespace std;
int abc(int a,int b=14)
{
	return a*b;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<abc(a)<<endl;
	cout<<abc(a,b)<<endl;
}
//EX:-int strle(const char *p){}
