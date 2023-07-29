// Inserts an element. And returns an iterator that points to the first of the newly inserted elements.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq1({1, 2, 3, 4, 5});
    deque<int> :: iterator it = dq1.begin();
    ++it;
    dq1.insert(it, 10);
    for(auto i: dq1)
    {
        cout<<i<<" ";
    }
    return 0;
}