#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);//2 1
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    // d.pop_back();
    // d.pop_front();
    // for(int i:d)
    // {
    //     cout<<i<<" ";
    // }
    cout<<endl;
    cout<<"element at first index is "<<d.at(1)<<endl;
    cout<<"element at front is "<<d.front()<<endl;
    cout<<"element at back is "<<d.back()<<endl;
    cout<<"DQ is Empty?? "<<d.empty()<<endl;
    cout<<"size of an array "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);//we should specif parameters 1 2
    cout<<"size of an array "<<d.size()<<endl;
    for(int i:d)
    {
        cout<<i<<" ";//1
    } 
    cout<<endl;
    return 0;
}