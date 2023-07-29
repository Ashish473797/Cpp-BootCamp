// Assign values to the same or different deque container.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq1({1, 2, 3});
    deque<int> dq2({4, 5, 6});
    dq1.assign(dq1.begin(), dq1.end());
    for(auto i: dq1)
    cout<<i<<" ";
    cout<<endl;
    dq1.assign(dq2.begin(), dq2.end());
    for(auto i: dq1)
    cout<<i<<" ";
    return 0;
}