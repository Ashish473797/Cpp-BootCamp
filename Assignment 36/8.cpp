// Sort an array in decending order using sort() function in C++ STL.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    array<int, 5> arr({ 10 ,1 ,5, 3, 7 });

    cout<<"Before sorting: ";
    for(auto i: arr)
    cout<<i<<" ";
    
    sort(arr.rbegin(), arr.rend());

    cout<<"After sorting: ";
    for(auto i: arr)
    cout<<i<<" ";

    return 0;
}