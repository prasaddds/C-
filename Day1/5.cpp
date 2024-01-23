#include<iostream>
using namespace std;
int glo=6;
void sum()
{
	cout<<glo<<endl;
	glo+=7;
}
int main()
{
	//int glo=11;
	cout<<glo<<endl;
	sum();
	cout<<"final value "<<glo<<endl;
}
//local variable has higher precedence
/*
Rules to declare varable:-
1)variable name in c++ can range from 1-255 char
2)must begin with letter or _
3)case sensitive
4)no spaces or special characters are allowed
5)we cannot use reserved words
*/
