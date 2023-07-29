/*  Create a c++ program  using multiset and returns whether the multiset is empty –> O(1) */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms;
    if(ms.empty())
    cout<<"multiset is empty";
    else
    cout<<"not empty";
    return 0;
}