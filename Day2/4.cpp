#include<iostream>
using namespace std;
struct employee{//tag name
	int a;//structure memberes
	char b;
	float c;
	void abccd(){
		cout<<"Values are "<<a<<" "<<b<<" "<<c<<" "<<endl;
	}
} abc;//structure variables
int main(){
	employee a;
	a.a=10;
	a.b='b';
	a.c=3.4f;
	a.abccd();
	abc={10,'c',10.2f};
	abc.abccd();
}
/*in c,in structure we cannot define a function inside a structure but we can do it in 
c++,generally called member function*/
/*data members can be accessed with the help of dot opertor*/
/*holds multiple elemenets of data types*/
/*combination of hetrogenous type of elements*/
/*structure is a user defined data type which can contains variables of different data types*/
