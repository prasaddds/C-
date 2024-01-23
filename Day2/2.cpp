#include<iostream>
using namespace std;
int main()
{
	int a=3;
	int *b=&a;//&-address of  a pointer, *-dereference operator
	cout<<b<<endl;//address of a 
	cout<<&a<<endl;//address of a 
	cout<<*b<<endl;//value at b
	
	/*pointer to pointer*/
	int **c=&b;//stores address of a pointer
	cout<<"Address of b "<<&b<<endl;//address of b
	cout<<c<<endl;//address of b
	cout<<*c<<endl;//address of c
	cout<<&c<<endl;
	cout<<"Value of b "<<**c<<endl;//value of b
	**c=**c+9;
	cout<<**c/6<<endl;
	cout<<**c+6<<endl;
	cout<<**c-6<<endl;
	cout<<**c*6<<endl;
	return 0;
}
//pointer is a derived data type in which we can store addresses of a variable
//*p is value stored at that address

/*
Pointer airthemetic:- p and q are pointer variables
a)pointer increamenet:- p++; move to next integer in an array
b)pointer dercreament:- p--; move to previous element in an array
c)p=p+2; move two steps ahead
d)p=p-2; move two steps before
e)l=p-q; gives number of integers in between

++(*p)/++*p->take data and increament data
*++p->move pointer to next and read data
*p++->read data then move p to next
(*p)++->increament data
*/
