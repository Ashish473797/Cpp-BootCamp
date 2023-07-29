// Write a C++ program to illustrate the emplace() function in unordered_multiset.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_multiset<int> multiSet({1, 2, 3, 5});
    multiSet.emplace(4);
    for(auto i: multiSet)
    {
        cout<<i<<" ";
    }
    return 0;
}