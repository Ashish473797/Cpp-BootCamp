// Give an algorithm for reversing a queue Q.

#include <bits/stdc++.h>
using namespace std;

void reverse(queue<int> &q)
{
    stack<int> Stack;
    while (!q.empty())
    {
        Stack.push(q.front());
        q.pop();
    }
    while (!Stack.empty())
    {
        q.push(Stack.top());
        Stack.pop();
    }
}

int main()
{
    queue<int> q({1, 2, 3, 4, 5});
    reverse(q);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}