// Write a program to find sum of vector elements.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec({1, 2, 3, 4, 5});
    cout<<accumulate(vec.begin(), vec.end(), 0);
    return 0;
}