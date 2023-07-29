// Using STL to check whether an array is empty or not.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    array<int, 5> arr({ 1, 2, 3, 4, 5 });
    if(arr.empty())
    cout<<"Array is Empty.";
    else
    cout<<"Array is not Empty.";
    return 0;
}