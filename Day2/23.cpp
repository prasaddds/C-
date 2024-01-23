/*strcuture*/
#include<iostream>
using namespace std;
struct//tag
{
	int rno;//data mmbers
	float salary;	//data members can be variables, pointers,arrays,other structures
}abc;
int main()
{
	abc={1,20};
	cout<<abc.rno<<" "<<abc.salary<<endl;
}
