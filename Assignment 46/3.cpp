// Create a map, insert some pairs and print all elements in reverse order using rbegin and rend function

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> m{{1,2},{2,3},{3,4},{3,5}};

    m.insert(pair<int, int>(5, 6));
    m.insert({7,8});
    m[6] = 6;
    for(auto i = m.rbegin(); i != m.rend(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    return 0;
}