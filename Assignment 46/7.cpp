// Sort a given map in descending order based on values instead of keys in C++ STL.

/*
Key value
1 6
2 8
6 3
8 2
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> m{{1,2},{2,3},{3,4},{3,5},{4,4},{5,2}};
    multimap<int, int> mm;
    for(auto i = m.begin(); i != m.end(); i++)
    {
        mm.insert({i->second,i->first});
    }
    for(auto i = mm.rbegin(); i != mm.rend(); i++)
    {
        cout<<i->second<<" "<<i->first<<endl;
    }
    return 0;
}