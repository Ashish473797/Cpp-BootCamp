// Segregate even and odd nodes in a Linked List using Deque.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> li({ 2, 3, 4, 5, 6, 7, 1, 16, 8, 9, 10, 11, 12, 13, 14, 15});
    deque<int> d;
    for(auto i: li)
    {
        if(i%2 == 0)
        d.push_front(i);
        else
        d.push_back(i);
    }
    for(auto i: d)
    {
        cout<<i<<" ";
    }
    return 0;
}