#include<iostream>
using namespace std;
class base
{
	public:
		int var_base=1;
		void display()
		{
			cout<<"displaying base class variables "<<var_base<<endl;
		}
};
class derived:public base
{
		public:
		int var_derived=2;
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
	
	base_class_pointer=&obj_derived;//base class pointer will be called
	base_class_pointer->display();
	
	return 0;	
}
//pointers to derived class
