#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    list<int> l1(l);//copy of list l
    list<int> l2(5,100);//size 5, all elements are 100
    l.push_back(1);
    l.push_front(2);
    for(int i:l)
    {
        cout<<i<<" ";//2 1
    }
    cout<<endl;
    l.erase(l.begin());//1
    cout<<"after erase ";
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of list is "<<l.size()<<endl;
}