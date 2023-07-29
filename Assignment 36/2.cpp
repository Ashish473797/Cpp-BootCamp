// Using STL Array returns the total number of elements in the array.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    array<int, 10> arr = { 1, 2, 3, 4, 5 };
    int size = 0;

    for(auto i: arr)
    {
        if(i!=0)
        size++;
    }

    cout<<size;
    
    return 0;
}