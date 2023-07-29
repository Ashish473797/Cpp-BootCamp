// Create an unordered_map and Initialize it using assignment and subscript operator

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, int> umap;
    umap[0] = 2;
    umap[2] = 3;
    umap[3] = 4;
    umap[4] = 5;
    umap[5] = 6;
    for(auto i: umap)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}