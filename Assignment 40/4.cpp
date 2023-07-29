/*Returns a constant iterator pointing to the first element of the container, that is, the
iterator cannot be used to modify, only traverse the deque.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq1({1, 2, 3, 4, 5});
    deque<int> :: const_iterator it = dq1.begin();
    for(it; it != dq1.end(); it++)
    cout<<*it<<" ";
    return 0;
}