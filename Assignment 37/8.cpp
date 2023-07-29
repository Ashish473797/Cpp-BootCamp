// Write a program to find common elements between two vectors.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec1({1, 2, 3, 4, 5});
    vector<int> vec2({6, 2, 3, 4, 7});
    vector<int> vec3(vec1.size()+vec2.size());
    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end());
    auto num = set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), vec3.begin());
    for(auto i = vec3.begin(); i != num ; i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}