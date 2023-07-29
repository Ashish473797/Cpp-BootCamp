// Returns the element from the given index using the STL array.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    array<int, 5>arr({1,2,3,4,5});
    int i;
    cout<<"Enter index upto five: ";
    cin>>i;
    cout<<arr.at(i-1);
    return 0;
}