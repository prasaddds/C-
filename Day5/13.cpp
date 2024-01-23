#include<iostream>
using namespace std;
class test
{
	int a;
	int b;
	public:
		test(int i,int j):a(i)
		{
			b=j;//allowed. if it is not done then b will have gv
			cout<<"coonstructor called"<<endl;
			cout<<a<<" "<<b<<endl;
		}
};
int main()
{
	test t(4,6);
	return 0;
}
