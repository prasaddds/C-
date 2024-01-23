#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);//should be in sorted order
    cout<<binary_search(v.begin(),v.end(),6)<<endl;
     cout<<"lower bound "<<lower_bound(v.begin(),v.end(),7)-v.begin()<<endl;
     cout<<"upper bound "<<lower_bound(v.begin(),v.end(),7)-v.end()<<endl;

     int a=3;
     int b=5;
     cout<<max(a,b)<<endl;
    //  cout<<swap(a,b)<<endl;
    swap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<abcd<<endl;
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
        for(int i:v)
    {
        cout<<i<<" ";
    }
}




















