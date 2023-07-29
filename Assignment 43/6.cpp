// Write a c++ program, to use priority_queue to implement min heap.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(30);
    pq.push(1);
    pq.push(50);
    pq.push(3);
    cout<<pq.top();
    return 0;
}