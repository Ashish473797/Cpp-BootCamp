/*Write a c++ program, to show that priority_queue is by default a Max Heap.
Note:
If elements are printed in descending order, then we have a max heap*/

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
    cout<<pq.top();
    return 0;
}