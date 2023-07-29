// Write a C++ program to illustrate the reserve function in unordered_multimap

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_multimap<int, int> umMap{{1, 2}, {2, 3}, {3, 4}, {4, 5}};
    cout<<umMap.size()<<endl;
    umMap.reserve(100);
    for(auto i: umMap)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl<<umMap.size();
    return 0;
}