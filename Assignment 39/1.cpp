// Write a c++ code, to demonstrate the forward list.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int> fl({ 1, 2, 3, 4, 5 });
    fl.push_front(0);
    fl.push_front(-1);
    for(auto i: fl)
    {
        cout<<i<<" ";
    }
    return 0;
}