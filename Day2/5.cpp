#include<iostream>
using namespace std;
struct abc
{
	int id;
	char favChar;
	float salary;	
}ep,ap;	
int main()
{
	ep.id=1;
	ep.favChar='C';
	ep.salary=12000;
	ap.id=500;
	cout<<ep.id<<" "<<ep.favChar<<" "<<" "<<ep.salary<<endl;
	return 0;
}
/*a strructure variable can be directly assigned to other structure variable of same type Ex:= a=b
we cannot compare structure variables, we can compare individually
array of structures are allowed, class[0].name.........
struct book library[20],nested structures are allowed,array within a structure as a member,
array of structure of particular type
*/
/*if wantto use only one instance/one structure variable, then there is no need to give tag name to structure*/
