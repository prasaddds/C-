#include<iostream>
using namespace std;
struct employee
{
	char favChar;//1+3(padding)
	int id;//4
	float salary;//4
	void display()
	{
		cout<<"size of employeee is "<<sizeof(employee)<<endl;
		cout<<"function inside structure is possible in c++"<<endl;	
	}	
};	
int main()
{
	struct employee DP;
	struct employee RS;
	DP.id=1;
	DP.favChar='C';
	DP.salary=12000;
	RS.id=2;
	RS.favChar='R';
	RS.salary=13000;
	cout<<DP.id<<" "<<DP.favChar<<" "<<" "<<DP.salary<<endl;
	cout<<RS.id<<" "<<RS.favChar<<" "<<" "<<RS.salary<<endl;
	DP.display();
	RS.display();
	return 0;
}
/*size of sthe structure is not always equal size of sum of individual data members because of padding. */
