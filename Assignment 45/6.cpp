/* Create a c++ program  using multiset and inserts the element x in the multiset –>
O(log n) */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms({ 1, 1, 10, 10, 2, 2, });
    multiset<int> :: iterator it = ms.begin();
    advance(it, 3);
    ms.insert(it, 5);
    for(auto i: ms)
    {
        cout<<i<<" ";
    }
    return 0;
}