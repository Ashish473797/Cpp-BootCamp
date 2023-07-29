/* Create stack1 of int type, and create another stack of the same type with name
stack2 and copy all the elements of stack1 into stack2 in the same order.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s1({1, 2, 3, 4, 5});
    stack<int> s2;
    stack<int> s3;
    while(!s1.empty())
    {
        s3.push(s1.top());
        s1.pop();
    }
    while(!s3.empty())
    {
        s2.push(s3.top());
        s3.pop();
    }
    while(!s2.empty())
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }
    return 0;
}