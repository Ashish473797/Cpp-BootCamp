// Check if a queue is empty or not using queue::size() function

#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q({1});
    if(q.size())
    cout<<"Queue is not Empty";
    else
    cout<<"Queue is Empty";
    return 0;
}