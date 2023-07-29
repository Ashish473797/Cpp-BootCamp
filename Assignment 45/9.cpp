// Create a c++ program  using multiset and remove only one instance of element from
// multiset having same value

#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms({ 1, 1, 2, 2, 2, 3, 5, 5, 5});
    vector<int> v;

    multiset<int> :: iterator first = ms.begin();
    while(first != ms.end())
    {
        auto second = first;
        second++;
        v.push_back(*first);
        if(*first == *second)
        {
            first++;
            
        }
        first++;
    }
    for(auto i: v)
    {
        cout<<i<<" ";
    }
    return 0;
}