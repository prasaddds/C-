#include<iostream>
using namespace std;
int main()
{
	//34.4 by default double
	//34.4f float
	//34.4l long double
	//literals
	float d=34.4;
	long double ld=34.4;
	long int li=4;
	cout<<d<<endl<<ld<<endl;//chaining
	cout<<sizeof(34.4f)<<endl;//4
	cout<<sizeof(34.4)<<endl;//8
		cout<<"size of long int is "<<sizeof(li)<<endl;
	cout<<"size of long double is "<<sizeof(ld)<<endl;//16
	cout<<sizeof(34.4l)<<endl;//16
	
	//reference variables
	float x=455;
	float &y=x;
	cout<<x<<endl;
	cout<<"fvfd "<<y<<endl;
	
	//typecasting
	int a=45;
	cout<<a<<endl;
	cout<<(float)a<<endl;
	float b=45.46;
	cout<<b<<endl;
	cout<<(int)b<<endl;
	cout<<int(b)<<endl;
	int c=(int)b;
	cout<<c<<endl;
	cout<<a+b<<endl;
	cout<<a+int(b)<<endl;
	cout<<a+(int)b<<endl;
	return 0; 
}
