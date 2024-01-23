#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst)
{
	list<int> :: iterator it;
	for(it=lst.begin();it!=lst.end();it++)
	{
		cout<<*iter<<" ";
	}
	cout<<endl;
}
int main()
{
	list<int>list1;//empty list
	list<int>list2(7);//size 7 of empty list
	list1.push_back(5);
	list1.push_back(7);
	list1.push_back(5);
	list<int> :: iterator iter;
	iter=list1.begin();
	cout<<*iter<<" ";//5
	iter++;
	cout<<*iter<<" ";//7
	display(list1);
	list<int> :: iterator iter;
	iter=list2.begin();
	*iter=45;
	iter++;
	*iter=55;
	iter++;
	list2.pop_back();
	list2.pop_front();
	list1.remove(9);//removes element
	list1.sort();
	list1.merge(list2);//list2 appended to list1
	list1.reverse();
	display(list2);
	return 0;
}
