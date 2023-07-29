// Write a C++ program to count the frequency of elements in unordered_multiset.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_multiset<int> multiSet({ 1, 1, 1, 3, 3, 8, 5});
    unordered_map<int, int> umap;

    for(auto i: multiSet)
    {
        umap[i]++;
    }

    for(auto i: umap)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}