#include<iostream>
#include<map>
using namespace std;/*same key cannot point towards same value*/
//by defau ordered map
//implemented b red black tree and balanced tree so, O(log n)
//unorder map using hash= search-O(1)
int main()
{
    map<int,string>m;
    m[1]="Babbar";
    m[12]="Love";
    m[3]="Kumar";
    m.insert({10,"Darling"});
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;//1 12 3
    }
    cout<<m.count(12)<<endl;//1
    m.erase(12);//1 3
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;// 1 3
    }
    auto it=m.find(1);
    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).first<<" ";
    }
}
