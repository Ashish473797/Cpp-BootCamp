/* Create a c++ program  using multiset and removes all the elements from the multiset –> O(n) */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms({ 1, 2, 3, 4, 5 });
    ms.erase(ms.begin(), ms.end());
    cout<<ms.empty();
    return 0;
}