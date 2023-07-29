// Write a program to Copy one vector’s elements to another vector.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec1({1, 2, 5, 8, 9, 3});
    vector<int> vec2;
    vec2.assign(vec1.begin(), vec1.end());
    for(auto i: vec2)
    {
        cout<<i<<" ";
    }
    return 0;
}