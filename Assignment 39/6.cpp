// Create two forward lists of int type, and merge them.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int> fl1({ 10, 7, 1, 2, 3, 4, 5 });
    forward_list<int> fl2({ 10, 0, 0, 4, 3, 7, 8});
    fl1.merge(fl2);
    for(auto i: fl1)
    {
        cout<<i<<" ";
    }
    return 0;
}