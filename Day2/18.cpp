/*strcuture*/
#include<iostream>
using namespace std;
struct abc//tag is optional
{
	int rno;//data mmbers
	float salary;	//data members can be variables, pointers,arrays,other structures
};
struct def//tag is optional
{
	int rno;//data mmbers
	float salary;	//data members can be variables, pointers,arrays,other structures
};
int main()
{
	struct abc abc1;
	struct def def1;
	abc1.rno=1;
	abc1.salary=1500;
	def1=abc1;
	cout<<def1.rno<<" "<<def.salary<<endl;
}
