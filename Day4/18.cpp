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
class derived : protected base//means only this class and those classes which inherited this class can
//access protected members and no one can
{
	public:
	derived(int x)
	{
		a=x;
	}
	void display()
	{
		cout<<a<<endl;
	}
};
int main()
{
	base b;
	derived d(10);
	d.display();
	return 0;
}
