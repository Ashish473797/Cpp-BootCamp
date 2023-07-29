// Write a C++ program to illustrate the swapping of data between two unordered_multiset

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_multiset<int> uset1({ 1, 4, 5, 2, 7, 2, 7});
    unordered_multiset<int> uset2({ 8, 1, 1, 1, 4, 6, 8});

    uset1.swap(uset2);

    for(auto i: uset1)
    {
        cout<<i<<" ";
    }

    return 0;
}