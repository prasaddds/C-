#include<iostream>
using namespace std;
int main()
{
	int marks[]={11,22,33,44,55,66};
	int *p=marks;
	cout<<p<<endl;
	cout<<*p<<endl;
//	cout<<*(++p)<<endl;
	cout<<*(p++)<<endl;//pointer will move, prints value 11
	cout<<*p<<endl;//22
	cout<<*(++p)<<endl;//33
	cout<<*p<<endl;//33
	*p=*p%10;//for changing values		
	cout<<*p<<endl;//changed value at index 2
	p=p+1;//for moving pointer:- +,- are allowed 44
	cout<<"sdfsd "<<*(p+1)<<endl;//no change in pointers position
	cout<<*(p+2)<<endl;//no change in pointers position
	cout<<*(p+3)<<endl;//no change in pointers position
	cout<<*p<<endl;//44
	for(int i=0;i<=5;i++)
	{
		cout<<marks[i]<<" ";
	}
	cout<<endl;
	int *m1=marks;//11 22 33 44 55 66
	cout<<"sfd"<<m1<<endl;
	cout<<*m1<<endl;//11
	
	cout<<"scale  "<<m1+1<<endl;//scale factor pointer not moved 
	cout<<*m1<<endl;//11
	
	cout<<m1+3<<endl;//scale factor
	cout<<*m1<<endl;//11
	
	cout<<m1+3<<endl;//scale factor
	cout<<m1-1<<endl;
//	cout<<m1+p<<endl;//not valid
	return 0;
}
//an array is a collection of items of similar types stored in contigious memory locations 
//pointer arithematic
//array itself is a pointer
//array ame indicates starting of ma address[base address]
//new address=curr address+(i*size of data type)
