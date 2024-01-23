#include<iostream>
using namespace std;
class base
{
	public:
		int var_base;
		void display()
		{
			cout<<"displaying base class variables "<<var_base<<endl;
		}
};
class derived:public base
{
		public:
		int var_derived;
		void display()
		{
			cout<<"displaying base class variables "<<var_base<<endl;
			cout<<"displaying derived class variables "<<var_derived<<endl;
		}
};
int main()
{
	base *base_class_pointer;
	base obj_base;
	derived obj_derived;
	base_class_pointer=&obj_derived;	//base class pointer can point to derived class object
	base_class_pointer->var_base=34;
	base_class_pointer->display();
	
//	base_class_pointer->var_derived=134;//not possible to access derived variables with base class pointer
	base_class_pointer->display();
	
	derived *derived_class_pointer;
	derived_class_pointer=&obj_derived;
	derived_class_pointer->var_derived=98;
	derived_class_pointer->display();
	return 0;
}
//pointers to derived class
