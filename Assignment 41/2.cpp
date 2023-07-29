// Create a stack of int type, and find the top most element in a stack.    

#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    
    cout<<s.top();
    
    return 0;
}