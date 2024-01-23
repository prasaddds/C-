/*strcuture*/
#include<iostream>
using namespace std;
struct abc//tag
{
	int rno;//data mmbers
	float salary;	//data members can be variables, pointers,arrays,other structures
};
int main()
{
	struct abc abc1;//structure variable
	abc1.rno=15;
	abc1.salary=15000;
	cout<<abc1.rno<<" "<<abc1.salary<<endl;
}
