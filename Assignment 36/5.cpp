// C++ STL program to demonstrate example of array::rbegin() and array::rend() functions.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    array<int, 10> arr({ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 });
    for(auto i = arr.rbegin(); i!=arr.rend(); i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}