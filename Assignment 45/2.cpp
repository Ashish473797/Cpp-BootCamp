// Create a c++ program  using multiset and returns an iterator to the theoretical
// element that follows the last element in the multiset –> O(1).

#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms({ 5, 5, 1, 4, 2, 2, 7, 3});
    cout<<*ms.end();
    return 0;
}