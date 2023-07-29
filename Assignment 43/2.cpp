/* Implement different operations on priority queue .i.e. adding element, removing
element, size of priority queue, and print it */

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
    cout<<"size is: "<<pq.size();
    return 0;
}