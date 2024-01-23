/*strcuture*/
#include<iostream>
using namespace std;
typedef struct
{
	int rno;//data mmbers
	float salary;	//data members can be variables, pointers,arrays,other structures
}abc;//tag(new data type)
int main()
{
	abc abc1={15,15000},abc2={12,100};
	cout<<abc1.rno<<" "<<abc1.salary<<endl;
	cout<<abc2.rno<<" "<<abc2.salary<<endl;
	
}
