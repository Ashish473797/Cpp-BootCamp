// Write a program to reverse forward list elements.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int> fl({ 1, 2, 3, 4, 5 });
    fl.push_front(0);
    fl.push_front(-1);
    fl.reverse();
    for(auto i: fl)
    {
        cout<<i<<" ";
    }
    return 0;
}