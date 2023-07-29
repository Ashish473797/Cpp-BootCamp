// Write a program to reverse vector elements.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec({1, 2, 3, 4, 5, 6, 7});
    reverse(vec.begin(), vec.end());
    for(auto i: vec)
    {
        cout<<i<<" ";
    }
    return 0;
}