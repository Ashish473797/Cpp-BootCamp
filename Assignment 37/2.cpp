// Declare a vector without initialization, insert some elements and print.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    for(auto i: vec)
    {
        cout<<i<<" ";
    }
    return 0;
}