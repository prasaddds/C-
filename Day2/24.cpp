//call by value(copying):- changes values will not be reflected in main function
//call by reference(directly changes at address):- changes will be reflected in main
#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a=5,b=10;
	swap(&a,&b);
	cout<<a<<" "<<b<<endl;
}
//call by reference using pointers
