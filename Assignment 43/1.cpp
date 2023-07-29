// Write a c++ program, to demonstrate priority queue.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(5);
    pq.push(30);
    pq.push(1);
    pq.push(50);
    pq.push(3);
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}