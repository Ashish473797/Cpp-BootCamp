// Create a stack of int type and sort it.

#include<bits/stdc++.h> 
using namespace std;

stack<int> sortStack(stack<int> &s)
{
    stack<int> tempStack;

    while(!s.empty())
    {
        int temp = s.top();
        s.pop();

        while(!tempStack.empty()  && tempStack.top() > temp)
        {
            s.push(tempStack.top());
            tempStack.pop();
        }
        tempStack.push(temp);
    }
    return tempStack;
}

int main()
{
    stack<int> s({10, 1, 7, 3, 19, 2, 5});
    stack<int> s2;
    stack<int> tempStack = sortStack(s);
    while(!tempStack.empty())
    {
        s2.push(tempStack.top());
        tempStack.pop();
    }
    while(!s2.empty())
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }
    return 0;
}