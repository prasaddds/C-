#include<iostream>
using namespace std;
class  base1
{
	protected:
		int base1int;
	public:
		void set_base1(int a)
		{
			base1int=a;
		}
};
class  base2
{
	protected:
		int base2int;
	public:
		void set_base2(int a)
		{
			base2int=a;
		}
};
//multiple inheritence
class derived: public base1,public base2
{
	public:
		void show()
		{
			cout<<"thye value of base1 is "<<base1int<<endl;
			cout<<"thye value of base2 is "<<base2int<<endl;
			cout<<"thye sum is "<<base1int+base2int<<endl;
		}
};
/*class derived visibility-mode vase1,visibility-mode base2;*/
int main()
{
	derived abc;
	abc.set_base1(25);//protected
	abc.set_base2(5);//protected
	abc.show();//public
	return 0;
}
//multiple:- class derived visibility-mode vase1,visibility-mode base2;
