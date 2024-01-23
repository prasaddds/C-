#include<iostream>
using namespace std;
class base
{
	protected:
	int a;
	private:
	int b;
};
/*
for a protected member:
					    public derivation  private derivation  protected derivatiom
	1.private members:     not inherited      not inherited       not inherited
	2:protected members:    protected         private             protected
	3:public members:       public            private             protected
*/
class derived : protected base//means only this class can access protected members and no one can
{
		
};
int main()
{
	base b;
	derived d;
//	cout<<b.a<<endl; cannot be accessed 
//	cout<<d.a<<endl; cannot be accessed coz a is protected in base and derived
	return 0;
}
