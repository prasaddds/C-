#include<iostream>
using namespace std;
class test
{
	int a;
	int b;
	public:
		//test(int i,int j):b(j),a(i+b)//no error but garbage value because a is declared before b
		//test(int i,int j):a(i),b(a+j)//b(a+j) is allowed
		test(int i,int j):a(i),b(i+j)//b(a+j) is allowed
		{
			cout<<"coonstructor called"<<endl;
			cout<<a<<" "<<b<<endl;
		}
};
int main()
{
	test t(4,6);
	return 0;
}
