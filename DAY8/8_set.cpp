#include<bits/stdc++.h>
using namespace std;//uses bst. returns elements in sorted order
int main()
{
    set<int>a;//duplicates will not be stored 
    a.insert(10);//O(logn)
    a.insert(200);
    a.insert(30);
    a.insert(40);
    a.insert(50);
    a.insert(130);
    a.insert(140);
    a.insert(450);
    for(int i:a)
    {
        cout<<i<<" ";//10 30 40 50 130 140 200 450
    }
    cout<<endl;
    
    a.erase(a.begin());//30 40 50 130 140 200 450
    set<int>::iterator it=a.begin();
    it++;
    a.erase(it);//30  50 130 140 200 450
     for(int i:a)
    {
        cout<<i<<" ";
    }   
    cout<<endl;
    cout<<a.count(40)<<endl;//tells element is there or not 0

    // cout<<a.find(50)<<endl;
    set<int>:: iterator itr=a.find(200);//finds iteratorr
    // cout<<itr<<endl; error
    itr++;
    cout<<*itr<<endl;//400

    for(auto it=itr;itr!=a.end();itr++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
