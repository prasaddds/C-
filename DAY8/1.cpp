#include<iostream>
#include<array>
using namespace std;
int main()
{
    int basic[3]={1,2,3};//fixed array
    array<int,4> a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    cout<<"element at index 2 "<<a.at(2)<<endl;//O(1)
    cout<<"array is empty? "<<a.empty()<<endl;
    cout<<"first elemnt in an array is "<<a.front()<<endl;
    cout<<"last element in an array is "<<a.back()<<endl;
    return 0;
}