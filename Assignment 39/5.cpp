// Write a program remove all consecutive duplicate elements from the forward list.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int> fl({ 1, 2, 3, 3, 3, 4, 5, 4, 5, 5 });
    fl.push_front(1);
    fl.push_front(2);
    fl.unique();
    for(auto i: fl)
    {
        cout<<i<<" ";
    }
    return 0;
}