#include<bits/stdc++.h>
using namespace std;
int main()
{//fifo
    queue<string> q;
    q.push("I");
    q.push("Love");
    q.push("you");
    q.push("uu");
    cout<<"first element is "<<q.front()<<endl;
    q.pop();
    cout<<"first element is "<<q.front()<<endl;
    cout<<q.size()<<endl;
    
}