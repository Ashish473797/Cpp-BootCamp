// Write a program to assign values in forward_list using the values of another list.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int> fl1({1, 2, 3, 4, 5});
    forward_list<int> fl2;
    fl2.assign(fl1.begin(), fl1.end());
    for(auto i: fl2)
    {
        cout<<i<<" ";
    }
    return 0;
}