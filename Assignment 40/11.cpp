// How to get the first and last elements of Deque in c++?

#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d({1, 2, 3, 4, 5});
    cout<<d.front();
    cout<<d.back();
    return 0;
}