// Checks whether the set is empty or not.if it is empty insert 5 elements in the set.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    if(s.empty())
    {
        s.insert(5);
    }
    else
    {
        cout<<"not Empty";
    }
    return 0;
}