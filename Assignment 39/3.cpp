// Create a forward list insert elements from 1 to 10 and find the sum of elements

#include<bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int> fl;
    for(int i = 10; i >= 1; i--)
    {
        fl.push_front(i);
    }
    cout<<endl;
    for(auto i: fl)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<accumulate(fl.begin(), fl.end(), 0);
    return 0;
}