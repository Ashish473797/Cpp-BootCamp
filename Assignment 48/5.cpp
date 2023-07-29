// Write a program to erase only a single value based on position.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    multimap<int,int, greater<int>> mp{{5, 7}, {1, 8}, {8, 1}, {5, 9}, {1, 2}};
    for(auto i = mp.begin(); i != mp.end(); i++)
    {
        if(i->first == 1)
        {
            mp.erase(i->first);
        }
    }
    for(auto i = mp.begin(); i != mp.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    return 0;
}