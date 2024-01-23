#include<bits/stdc++.h>
using namespace std;
int main()
{
    //default: maxheap
    //priority queue- highest number higher priority
    priority_queue<int>maxi;//highest element while fetching
   priority_queue<int, vector<int>, greater<int>> mini;
   maxi.push(1);
   maxi.push(2);
  maxi.push(300);
   maxi.push(4);
   int n=maxi.size();
   for(int i=0;i<n;i++)
   {
       cout<<maxi.top()<<" ";
       maxi.pop();
   }
   cout<<endl;
   mini.push(300);
   mini.push(200);
   mini.push(500);
   mini.push(900);
      int m=mini.size();
   for(int i=0;i<m;i++)
   {
       cout<<mini.top()<<" ";
       mini.pop();
   }
   cout<<"isEmpty? "<<mini.empty()<<endl;
    return 0;

}