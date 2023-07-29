// Creating a list by assigning the all elements of another list C++ STL

#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> li1({ 1, 2, 3, 4, 5 });
    list<int> li2;
    li2.assign(li1.begin(), li1.end());
    for(auto i: li2)
    {
        cout<<i<<" ";
    }
    return 0;
}