// Return a  first element and last element of the deque container.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq({1, 2, 3});
    cout<<"first: "<<dq.front();
    cout<<"second: "<<dq.back();
    return 0;
}