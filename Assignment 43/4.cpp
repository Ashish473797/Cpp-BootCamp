// Write a c++ program, to swap the elements of two priority queues of int type.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> p1, p2;
    int i = 1;
    for(i; i <= 5; i++)
    {
        p1.push(i);
    }
    for(i; i <= 15; i++)
    {
        p2.push(i);
    }
    p1.swap(p2);
    while(!p1.empty())
    {
        cout<<p1.top()<<" ";
        p1.pop();
    }
    cout<<endl;
    while(!p2.empty())
    {
        cout<<p2.top()<<" ";
        p2.pop();
    }
    return 0;
}