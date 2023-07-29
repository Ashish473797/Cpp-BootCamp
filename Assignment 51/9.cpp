// Write a C++ program to illustrate the load_factor() function in unordered_multiset.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_multiset<int> m({ 1, 2, 3, 4, 5});
    cout<<m.load_factor();
    return 0;
}