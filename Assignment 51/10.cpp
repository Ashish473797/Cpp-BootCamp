// Write a C++ program to illustrate the reverse() function in unordered_multiset.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_multiset<int> m({ 1, 2, 3, 4, 5});
    m.reserve(5);
    for(auto i: m)
    cout<<i<<" ";
    return 0;
}