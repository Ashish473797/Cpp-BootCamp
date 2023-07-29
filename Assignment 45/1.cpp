// Create a c++ program  using multiset and returns an iterator to the first element in the multiset –>  O(1)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms({ 5, 5, 1, 4, 2, 2, 7, 3});
    // for(auto i: ms)
    // {
    //     cout<<i<<" ";
    // }
    cout<<*ms.begin();
    return 0;
}