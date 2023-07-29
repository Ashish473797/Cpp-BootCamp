// Create a map, use a member function to tell whether a map is empty or not and then
// insert some pairs into the map and find the size of map

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> m;

    if(m.empty())
    {
        cout<<"map is empty";
        m.insert(pair<int, int>(5, 6));
        m.insert({7,8});
        m[6] = 6;
    }
    
    cout<<"size of map is: "<<m.size();
    
    for(auto i = m.begin(); i != m.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    return 0;
}