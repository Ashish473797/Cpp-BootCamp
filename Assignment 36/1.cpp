//Using STL Array gets and sets a reference to an element based on a given index.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    array<int, 10> arr = { 1, 2, 3, 4, 5 };
    arr[5] = 6;

    for(auto i: arr)
    cout<<i<<" ";
    
    return 0;
}