// Create a stack, and implement main operations like push(), pop(), peek(), empty() and size().

#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.size();
    
    return 0;
}