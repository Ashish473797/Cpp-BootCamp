// Write a c++ program, to demonstrate priority queue having a min element at top.

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