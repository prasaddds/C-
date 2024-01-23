/*
map:-value,pair. associative array
*/
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	map<string,int> marks;
	marks["harry"]=98;
	marks["jack"]=54;
	map<string,int> :: iterator iter;
	marks.insert( { {"Rohan", 89}, {"Akshat", 46} } );
	for(iter=marks.begin();iter!=marks.end();iter++)
	{
		cout<<(*iter).first<<" "<<(*iter).second<<endl;
	}
	cout<<marks.size()<<endl;
	cout<<marks.empty()<<endl;
	cout<<marks.max_size()<<endl;
	return 0;
}
