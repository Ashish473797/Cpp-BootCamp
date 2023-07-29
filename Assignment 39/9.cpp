// Write a C++ code to demonstrate working of splice_after() in forward list.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int> fl1({1, 2, 3, 4});
    forward_list<int> fl2({6, 7, 8});
    forward_list<int> :: iterator it = fl1.begin();
    advance(it, 1);
    fl1.splice_after(it, fl1, fl2.before_begin(), fl2.end());

    for(auto i: fl1)
    {
        cout<<i<<" ";
    }
    return 0;
}