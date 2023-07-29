// Create a stack of int type and sort it in descending order

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
    stack<int> tempStack = sortStack(s);
    while(!tempStack.empty())
    {
        cout<<tempStack.top()<<" ";
        tempStack.pop();
    }
    return 0;
}