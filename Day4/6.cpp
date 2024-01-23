#include<iostream>
using namespace std;
int count=0;
class num
{
	public:
	num()
	{
		count++;
		cout<<"constructor called for object number "<<count<<endl;
	}	
	~num()
	{
		cout<<"destructor is called for object number"<<count<<endl;
		count--;
	}
};
int main()
{
	cout<<"inside main function"<<endl;
	cout<<"creating first object"<<endl;
	num n1;
	{
		cout<<"entering this block"<<endl;
		cout<<"creating two more objects"<<endl;
		num n2,n3;
		cout<<"exiting this block"<<endl;
	}
	cout<<"back to main code"<<endl;
	return 0;
}
//destructor will not take argument,will not return anything
