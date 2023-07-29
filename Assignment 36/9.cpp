// C++ program to find the integers which come an odd number of times in an array using C++ STL.

#include<bits/stdc++.h>
using namespace std;

int oddInteger(array<int, 5> arr)
{
    int res = 0;
    for(auto i: arr)
    {
        res = res^i;
    }
    return res;
}

int main()
{
    array<int, 5> arr({ 1, 2, 2, 5, 1 });
    cout<<"Odd Interger is: "<<oddInteger(arr);
    return 0;
}