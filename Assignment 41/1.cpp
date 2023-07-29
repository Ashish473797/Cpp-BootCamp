// Create a stack of int type, push 5 elements in it and print it on the console screen.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    while(!s.empty())
    {
    cout<<s.top()<<" ";
    s.pop();
    }
    return 0;
}