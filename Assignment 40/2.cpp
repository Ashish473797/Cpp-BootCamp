// Returns a reverse iterator which points to the last element of the deque (i.e., its reverse beginning)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq1({1, 2, 3, 4, 5});
    for(auto i = dq1.rbegin(); i != dq1.rend(); i++)
    cout<<*i<<" ";
    return 0;
}