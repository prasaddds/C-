#include<iostream>
using namespace std;
class C2;
class C1
{
	int val;
	friend void exchange(C1 &,C2 &);
	public:
		void indata(int a)
		{
			val=a;
		}
		void display(void)
		{
			cout<<val<<endl;
		}
};
class C2
{
	int val2;
	friend void exchange(C1 &,C2 &);
	public:
		void indata(int a)
		{
			val2=a;
		}
		void display(void)
		{
			cout<<val2<<endl;
		}
};
void exchange(C1 &x,C2 &y)/*arey fucker we cannot access private data members. Hello MR. I declared Friend function. 
So I can use it*/
{
	int temp=x.val;
	x.val=y.val2;
	y.val2=temp;
}
int main()
{
	C1 obj1;
	C2 obj2;
	obj1.indata(34);
	obj2.indata(44);
	exchange(obj1,obj2);
	cout<<"value of c1 after exchange "<<" ";
	obj1.display();
	cout<<"value of c2 after exchange "<<" ";
	obj2.display();
	return 0;
}
