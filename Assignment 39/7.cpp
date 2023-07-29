// Below are two forward lists, first sort them and then merge them.
// forwardlist1={3,2,9}
// forwardlist2={8,1,2}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int> fl1({ 3, 2, 9 });
    forward_list<int> fl2({ 8, 1, 2 });
    fl1.sort();
    fl2.sort();
    fl1.merge(fl2);
    for(auto i: fl1)
    {
        cout<<i<<" ";
    }
    return 0;
}