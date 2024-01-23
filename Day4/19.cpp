#include<iostream>
using namespace std;
class fatherProperty
{
	protected:
		string propvalue="1 million USD";
	public:
		void getProperty()
		{
			cout<<"Father property "<<propvalue<<endl;
		}
};
class son:public fatherProperty
{
	public:
		void getProperty()
		{
			cout<<"Son property "<<propvalue<<endl;
		}
};
class grandson:public son
{
	public:
		void getProperty()
		{
			cout<<"Son property "<<propvalue<<endl;
		}
};
int main()
{
	return 0;
}
