// List functions in C++ STL (Standard Template Library)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> li({10, 3, 1, 7, 5, 11});
    li.push_back(40);
    li.push_front(1);
    li.sort(greater<int>());
    for(auto i: li)
    {
        cout<<i<<" ";
    }
    return 0;
}