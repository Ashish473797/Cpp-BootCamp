// Write a C++ program to copy the data of one unordered_map into another and print it on the screen.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_multimap<int, int> umMap1{{1, 2}, {2, 3}, {3, 4}};
    unordered_multimap<int, int> umMap2(umMap1);
    for(auto i: umMap2)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}