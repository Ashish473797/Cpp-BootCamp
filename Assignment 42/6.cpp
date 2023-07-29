/*In C++ STL, Queue is a type of container that follows FIFO (First-in-First-Out)
elements arrangement i.e. the elements which insert first will be removed first. In the
queue, elements are inserted at one end known as "back" and are deleted from
another end known as "front".empty() and size() function of the queue with the
Example*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q({ 1, 2, 3, 4, 5, });
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.size()<<endl;
    return 0;
}