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
	complex *ptr=new complex[4];
	ptr->setData(1,4);
	ptr->getData();
	
	return 0;
}
