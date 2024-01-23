#include<iostream>
#include<vector>
using namespace std;
void display(vector <int>&v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
		cout<<v.at(i)<<" ";
	}
}
int main()
{
	vector<int> vec1;
	int element;
	for(int i=0;i<4;i++)
	{
		cout<<"enter an element to add this vector";
		cin>>element;
		vec1.push_back(element);//pushing elements into stack
	}
	vec1.pop_back();//poping elements from stack
	display(vec1);
	vector<int> :: iterator iter=vec1.begin();//iterator is pointing towards first element
	vec1.insert(iter,966);//inserts element at begin
	vec1.insert(iter+1,566);//insert element at begin+1
	vec1.insert(iter+1,5,2);//inserts 5 elements at second pos
	
	display(vec1);
	return 0;
}
