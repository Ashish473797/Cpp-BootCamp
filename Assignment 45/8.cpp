/* Create a c++ program  using multiset and removes all the occurrences of x –> O(log n) */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms({1, 1, 2, 2, 3, 3, 5});
    set<int> s;
    multiset<int> :: iterator it = ms.begin();
    for(it; it!=ms.end(); it++)
    {
        s.insert(*it);
    }
    for(auto i: s)
    {
        cout<<i<<" ";
    }
    return 0;
}