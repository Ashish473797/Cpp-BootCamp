// Create a map, and insert some pairs and find one pair out of the inserted pair and
// replace it with another pair and print map

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> m{{1,2},{2,3},{3,4},{3,5}};

    m.insert(pair<int, int>(5, 6));
    m.insert({7,8});
    m[6] = 6;
    m[3] = 9;
    for(auto i = m.begin(); i != m.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    return 0;
}