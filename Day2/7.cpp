#include<iostream>
using namespace std;
typedef struct employee
//typedef is used for defining our own data type and typedef is a kw used to assign new name to existing DT
{
	int id;
	char favChar;
	float salary;	
}ep;	
int main()
{
	struct employee DP;
	DP.id=1;
	DP.favChar='C';
	DP.salary=12000;
	ep RS;
	RS.id=2;
	RS.favChar='R';
	RS.salary=13000;
	cout<<DP.id<<" "<<DP.favChar<<" "<<" "<<DP.salary<<endl;
	cout<<RS.id<<" "<<RS.favChar<<" "<<" "<<RS.salary<<endl;
	return 0;
}
