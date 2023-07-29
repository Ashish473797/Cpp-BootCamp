// Deletes the first element of the queue.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<char> q({'a', 's', 'h', 'i', 's', 'h', ' '});
    q.pop();
    while(!q.empty())
    {
        cout<<q.front();
        q.pop();
    }
    return 0;
}