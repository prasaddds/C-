/*nested strcuture*/
#include<iostream>
using namespace std;
struct abc//tag
{
	int rno;//data mmbers
	float salary;	//data members can be variables, pointers,arrays,other structures
};
struct def
{
	string str;
	int salary;
	abc nestedStructure;
};
int main()
{
	struct abc abc1;
	abc1.rno=15;
	abc1.salary=15000;
	cout<<abc1.rno<<" "<<abc1.salary<<endl;
	def def1;
	def1.str="dladas";
	def1.salary=1600000;
	def1.nestedStructure.rno=51;
	def1.nestedStructure.salary=15512;
	cout<<def1.str<<" "<<def1.salary<<" "<<def1.nestedStructure.rno<<" "<<def1.nestedStructure.salary<<endl;
}
