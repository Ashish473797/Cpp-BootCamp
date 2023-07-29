/*Write a C++ program to delete all copies from an unordered_multiset.
Example:
Input - 6 4 2 7 3 3 1 1 1
Output - 6 4 2 7 3 1 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_multiset<int> umultiset({ 6, 4, 2, 7, 3, 3, 1, 1, 1});
    unordered_set<int> s;
    for(auto i: umultiset)
    {
        s.insert(i);
    }
    for(auto i: s)
    {
        cout<<i<<" ";
    }

    return 0;
}