// Returns the maximum number of elements that a deque container can hold.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq({1, 2, 3});
    cout<<dq.max_size();
    return 0;
}