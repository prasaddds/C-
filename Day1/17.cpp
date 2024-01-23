#include<iostream>
using namespace std;
int main()
{
	bool a=true,b=false;
	cout<<a<<endl;
	cout<<std::boolalpha;
	cout<<b<<endl;
	cout<<a<<endl;
	cout<<std::noboolalpha;
	cout<<a<<endl;
	cout<<b<<endl;
}
