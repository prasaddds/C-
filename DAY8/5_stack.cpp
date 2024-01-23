#include<bits/stdc++.h>
using namespace std;
int main()
{//LIFO
    stack<string> s;
    s.push("I");
    s.push("Love");
    s.push("Yu");
    cout<<"Top most element is "<<s.top()<<endl;
    s.pop();
    cout<<"Top most element after pop is "<<s.top()<<endl;
    cout<<"size of stack is "<<s.size()<<endl;
    cout<<"is Empty> "<<s.empty()<<endl;
    return 0;
}