// Write a program to erase all the entries of the key.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    multimap<int,int, greater<int>> mp{{5, 7}, {1, 8}, {8, 1}, {5, 9}, {1, 2}};
    mp.erase(mp.begin(), mp.end());
    for(auto i = mp.begin(); i != mp.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    return 0;
}