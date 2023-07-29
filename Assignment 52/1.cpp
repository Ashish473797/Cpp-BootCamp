// Write a C++ program to initialise the unordered_map and print it on the screen.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_multimap<int, int> umMap{{1, 2}, {1, 2}, {2, 3}, {4, 5}, {5, 6}};
    for(auto i: umMap)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}