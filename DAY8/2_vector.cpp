#include<iostream>
#include<vector>//Dynamic sized array
using namespace std;
int main()
{
    vector<int> v;
    vector<int> a(5,1);//size of vector is 5 and all its elements are initialized to 1
    vector<int> b(a);//copying elements of a to b
    cout<<"printing elements of vector a "<<endl;
    for(int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"capacity-> "<<v.capacity()<<endl;
    v.push_back(10);
    cout<<"capacity -> "<<v.capacity()<<endl;
    v.push_back(20);
    cout<<"capacity-> "<<v.capacity()<<endl;
    v.push_back(30);
    cout<<"capacity->"<<v.capacity()<<endl;//capacity will be doubled as we go
    cout<<"Size->"<<v.size()<<endl;
    cout<<"Element at index 2 "<<v[2]<<endl;
    cout<<"Front eleemnt in an array is "<<v.front()<<endl;
    cout<<"Last element in an array is "<<v.back()<<endl;
    cout<<"Elements in vector are "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    v.pop_back();
    cout<<"Elements in vector after popping one element "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }    
    v.clear();

    return 0;
}