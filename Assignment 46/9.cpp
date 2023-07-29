/* Given two maps map1 and map2 having a string as the key and arrays of integers as
values, the task is to merge them in one map such that if a key is common in both the
maps, the respective arrays should be merged.
Example:
Input: map1 = { (“key1”, {0, 1}), (“key2”, {0, 1}) }, map2 = { (“key2”, {1, 2}) };
Output: { (key1, {0, 1}), (key2, {0, 1, 2}) }
Explanation: After merging key1 array will become {0, 1} and for key2 after merging
array will become {0, 1, 2} */

#include<bits/stdc++.h>
using namespace std;
void print(set<int> s)
{
    cout<<"{ ";
    for(auto i: s)
    {
        cout<<i<<" ";
    }
    cout<<"}";
}
int main()
{
    map<string, set<int>> m1{{"key1", {0, 1}},{"key2", {0, 1}}};
    map<string, set<int>> m2{{"key2", {1, 2}}};
    map<string, set<int>> m3(m1);
    
    for(auto i = m2.begin(); i != m2.end(); i++)
    {
        if(m3.find(i->first) != m3.end())
        {
            auto it = m3.find(i->first);
            set<int> s(it->second);
            for(auto a = i->second.begin(); a != i->second.end(); a++)
            {
                s.insert(*a);
            }
            m3[it->first] = s;
        }
    }

    for(auto i= m3.begin(); i != m3.end(); i++)
    {
        cout<<i->first<<" ";
        print(i->second);
        cout<<endl;
    }
    return 0;
}