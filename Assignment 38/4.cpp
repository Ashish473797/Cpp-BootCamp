// Iterate a list in reverse order C++ STL

#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> li({1, 2, 3, 4, 5});
    for(auto i = li.rbegin(); i != li.rend(); i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}