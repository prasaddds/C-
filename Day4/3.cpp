#include<iostream>
using namespace std;
class bank
{
	int principal;
	int years;
	float intrestrate;
	float returnvalue;
	public:
		bank(){
		cout<<"default Constructor is called"<<endl;
		}//error if this default constructor is not there
		void show();
		bank(int p,int y,float r);
		bank(int p,int y,int r);
};
bank::bank(int p,int y,float r)
{
	principal=p;
	years=y;
	intrestrate=r;
	returnvalue=principal;
	cout<<"for float"<<endl;
	for(int i=0;i<y;i++)
	{
		returnvalue=returnvalue*(1+intrestrate);
	}
}
bank::bank(int p,int y,int r)
{
	principal=p;
	years=y;
	intrestrate=float(r)/100;
	returnvalue=principal;
	cout<<"for int"<<endl;
	for(int i=0;i<y;i++)
	{
		returnvalue=returnvalue*(1+intrestrate);
	}
}
void bank::show()
{
	cout<<"principal "<<principal<<" return value"<<returnvalue<<" years "<<years<<endl;
}
int main()
{
	bank b1,b2,b3;//when object is created default constructor is called but if we pass all its values here, 
	//then default constructor is not necesary
	int p,y;
	float r;
	int R;
	b3.show();
	cout<<"enter P,y,r"<<endl;
	cin>>p>>y>>r;
	b1=bank(p,y,r);
	b1.show();
	cout<<"enter P,y,r"<<endl;
	cin>>p>>y>>R;
	b2=bank(p,y,R);
	b2.show();
	return 0;
}
//dynamic initiallization of objects using constructor
//
