#include<iostream>
using namespace std;
class complex
{
	int real,imag;
	public:
		void getData()
		{
			cout<<real<<" "<<imag<<endl;
		}
		void setData(int a,int b)
		{
			real=a;
			imag=b;
		}		
};
int main()
{
	complex c;
	complex *ptr=new complex;
	(*ptr).setData(1,2);//is exaclty same as  
	ptr->setData(1,2);
	(*ptr).getData();//ptr->setData
	return 0;
}
