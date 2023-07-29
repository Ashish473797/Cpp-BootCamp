//  Merge two lists C++ STL

#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> li1({ 1, 3, 5});
    list<int> li2({ 2, 4, 6});
    li1.merge(li2);
    for(auto i: li1)
    {
        cout<<i <<" ";
    }
    return 0;
}