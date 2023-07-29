// Exchange the contents of two queues but the queues must be of the same data type, although sizes may differ.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q1({ 1, 2, 3 }), q2({5, 6, 7, 8}), q3;
    while(!q1.empty())
    {
        q3.push(q1.front());
        q1.pop();
    }
    while(!q2.empty())
    {
        q1.push(q2.front());
        q2.pop();
    }
    while(!q3.empty())
    {
        q2.push(q3.front());
        q3.pop();
    }
    while(!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl;
    while(!q2.empty())
    {
        cout<<q2.front()<<" ";
        q2.pop();
    }
    return 0;
}