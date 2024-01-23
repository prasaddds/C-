#include<iostream>
using namespace std;
class shop
{
	int id;
	float price;
	public:
		void setData(int a,float b)
		{
			id=a;
			price=a;
		}
		void getData(void)
		{
			cout<<id<<" "<<price<<endl;
		}
};
int main()
{
	int size=2;
	int p;
	float q;
	shop *ptr=new shop[size];//ptr stores address of shop
	shop *ptrTemp=ptr;
	for(int i=0;i<size;i++)
	{
		cout<<"enter id and price of item "<<i+1<<endl;
		cin>>p>>q;
		(*ptr).setData(p,q);//ptr->setData(p,q);
		ptr++;
	}
	for(int i=0;i<size;i++)
	{
		cout<<"item number "<<i+1<<endl;
		ptrTemp->getData();
		ptrTemp++;
	}
	return 0;
}
