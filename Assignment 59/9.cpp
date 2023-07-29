// Given a queue with random elements, we need to sort it.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q({3, 1, 9, 2, 8, 10, 15, 12});
    priority_queue<int, vector<int>, greater<int>> pq;
    while(!q.empty())
    {
        pq.push(q.front());
        q.pop();
    }
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}