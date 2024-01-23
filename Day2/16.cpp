/*strcuture*/
#include<iostream>
using namespace std;
struct abc//tag is optional
{
	int rno;//data mmbers
	float salary;	//data members can be variables, pointers,arrays,other structures
}abc1,abc2;
int main()
{
	abc1.rno=15;
	abc1.salary=15000;
	abc2.rno=16;
	abc2.salary=16000;
	cout<<abc1.rno<<" "<<abc1.salary<<endl;
	cout<<abc2.rno<<" "<<abc2.salary<<endl;
}
