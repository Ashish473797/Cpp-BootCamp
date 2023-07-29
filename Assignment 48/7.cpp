// Write a program to find a lower bound.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    multimap<int,int, greater<int>> mp{{5, 7}, {1, 8}, {8, 1}, {5, 9}, {1, 2}};
    auto it = mp.lower_bound(8);
    cout<<it->first<<" "<<it->second<<endl;
    it = mp.lower_bound(5);
    cout<<it->first<<" "<<it->second<<endl;
    it = mp.lower_bound(6);
    cout<<it->first<<" "<<it->second<<endl;
    return 0;
}