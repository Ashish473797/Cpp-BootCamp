// Write a C++ program to initialise the unordered_multiset and print it on the screen

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_multiset<int> umultiset({1, 1, 2, 6, 3, 10, 5, 5, 7});
    for(auto i: umultiset)
    {
        cout<<i<<" ";
    }
    return 0;
}