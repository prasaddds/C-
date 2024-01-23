/*strcuture*/
#include<iostream>
using namespace std;
struct abc//tag is optional
{
	int rno;//data mmbers
	float salary;	//data members can be variables, pointers,arrays,other structures
}abc1[2];
int main()
{
	abc1[0].rno=15;
	abc1[0].salary=15000;
	abc1[1].rno=16;
	abc1[1].salary=16000;
	cout<<abc1[0].rno<<" "<<abc1[0].salary<<endl;
	cout<<abc1[1].rno<<" "<<abc1[1].salary<<endl;
}
