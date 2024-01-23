#include<iostream>
using namespace std;
void swap(int &a,int &b)//formal para
{
	int temp=a;
	a=b;
	b=temp;
}
int main()
{
	int a=5,b=10;
	swap(a,b);//actual para
	cout<<a<<" "<<b<<endl;
	cout<<-5%-25<<endl;
}
/*
The call by reference method of passing arguments to a function copies the reference of an argument into the formal parameter.
Inside the function, the reference is used to access the actual argument used in the call.
This means that changes made to the parameter affect the passed argument.
*/
