// Erase an element from a set.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(10);
    s.insert(3);
    s.insert(1);
    s.insert(2);
    s.insert(18);

    s.erase(18);
    
    for(auto i: s)
    {
        cout<<i<<" ";
    }
    return 0;
}