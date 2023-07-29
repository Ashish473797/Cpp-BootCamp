// Write a c++ program to demonstrate functionality of unordered_map.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, int> umap;
    umap.insert({1, 2});
    umap.insert({1, 3});
    umap[2] = 5;
    umap[3] = 1;
    umap[7] = 8;
    for(auto i = umap.begin(); i != umap.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    return 0;
}