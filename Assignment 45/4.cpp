/* Create a c++ program  using multiset and returns the maximum number of elements
that the multiset can hold –> O(1) */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms;
    cout<<ms.max_size();
    return 0;
}