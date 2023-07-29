// Assign a list with array elements C++ STL.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(int);
    list<int> li2;
    li2.assign(arr, arr+size);
    for(auto i: li2)
    {
        cout<<i<<" ";
    }
    return 0;
}