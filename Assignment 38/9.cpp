// Remove all consecutive duplicate elements from the list | C++ STL

#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li({ 1, 1, 2, 1, 2, 2, 5, 5, 6, 6});
    li.unique(); // remove consicutive duplicate only
    for(auto i: li)
    {
        cout<<i<<" ";
    }
    return 0;
}