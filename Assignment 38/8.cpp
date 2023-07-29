// Remove all occurrences of an element and remove set of some specific from the list C++ STL.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li({ 1, 2, 3, 4, 5, 1, 1, 1 });
    list<int>::iterator it = li.begin();
    advance(it, 3);
    li.erase(it, li.end());
    for(auto i: li)
    {
        cout<<i<<" ";
    }
    li.erase(li.begin(), li.end());
    cout<<endl;
    for(auto i: li)
    {
        cout<<i<<" ";
    }
    li.remove(1);
    cout<<endl;
    for(auto i: li)
    {
        cout<<i<<" ";
    }
    return 0;
}