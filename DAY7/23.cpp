#include<iostream>
using namespace std;
/*function templates and function templates with parameters*/
template <class T1,class T2>
float funcavg(T1 a,T2 b)
{
	float avg=(a+b)/2.0;
	return avg;
}
int main()
{
	float a=funcavg(5.2,2.1);
	cout<<a<<endl;
	return 0;
}
