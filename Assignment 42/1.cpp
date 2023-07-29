// Print all elements of a queue in C++ STL

#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q({ 1, 2, 3, 4, 5 });
    while(!(q.empty()))
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}