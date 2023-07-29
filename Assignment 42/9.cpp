// Adds the element ‘g’ at the end of the queue.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<char> q({'a', 's', 'h', 'i', 's', 'h', ' '});
    q.push('g');
    while(!q.empty())
    {
        cout<<q.front();
        q.pop();
    }
    return 0;
}