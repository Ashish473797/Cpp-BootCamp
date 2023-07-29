// Iterate a list C++ STL.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> li({1, 2, 3, 4, 5});
    for(auto i = li.begin(); i != li.end(); i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}