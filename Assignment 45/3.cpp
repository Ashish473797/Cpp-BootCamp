// Create a c++ program  using multiset and returns the number of elements in the multiset –> O(1).

#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms({ 5, 5, 1, 4, 2, 2, 7, 3});
    cout<<ms.size();
    return 0;
}