// Insert a new element into the queue container, the new element is added to the end of the queue

#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q({1, 2, 3});
    q.push(5);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}