/*Unions*/
/*
1)like structures and classes, union is aloso user defined data type
2)in union, all members share the biggest same memory location
3)this is used to achieve polyorphisim in c++
4)used when we need only one value out of many that time we will use it
5)used to get the actual data in parts
*/
#include<iostream>
using namespace std;
union square/*size is 4*/
{
	int height;
	int width;
};
int getArea(int width,int height)
{
	return width*height;
}
int main()
{
	square sqr;
	sqr.width=10;
	sqr.height=4;
	cout<<getArea(sqr.width,sqr.height)<<endl;
	return 0;
}
