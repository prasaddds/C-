/*strcuture*/
#include<iostream>
using namespace std;
typedef struct sasa
{
	int rno;//data mmbers
	float salary;	//data members can be variables, pointers,arrays,other structures
}abc;//tag(new data type)
int main()
{
	abc abc1,abc2;
	abc1.rno=15;
	abc1.salary=15000;
	abc2.rno=15;
	abc2.salary=15000;
	sasa c1;
	cout<<abc1.rno<<" "<<abc1.salary<<endl;
	cout<<abc2.rno<<" "<<abc2.salary<<endl;
}
