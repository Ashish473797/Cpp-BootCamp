// Remove elements from a container from the specified position or range in deque.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});

    dq.erase(dq.begin()+2, dq.end()-2);

    for(auto i: dq)
    cout<<i<<" ";

    return 0;
}