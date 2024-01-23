#include<iostream>
using namespace std;
class shop
{
	public:
		int counter=0;
		int itemId[100];
		int itemPrice[100];
		void initCounter()
		{
			counter=0;
		}
		void displayPrice();
		void setPrice();
};
void shop::setPrice()
{
	cout<<"enter id"<<endl;
	cin>>itemId[counter];
	cout<<"enter price"<<endl;
	cin>>itemPrice[counter];
	counter++;
}
void shop::displayPrice()
{
	for(int i=0;i<counter;i++)
	{
		cout<<itemId[i]<<" "<<itemPrice[i]<<endl;
	}
}
int main()
{
	shop dhukaan;
	cout<<dhukaan.counter<<endl;
	dhukaan.initCounter();//0
	dhukaan.setPrice();
	dhukaan.setPrice();
	dhukaan.setPrice();
	dhukaan.displayPrice();
	for(int i=0;i<dhukaan.counter;i++)
	{
		cout<<dhukaan.itemId[i]<<" "<<dhukaan.itemPrice[i]<<endl;
	}
	return 0;
}
