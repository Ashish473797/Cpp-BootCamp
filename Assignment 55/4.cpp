/* Given a stack, the task is to sort it such that the top of the stack has the greatest element.
   Input:
   Stack: 11 2 32 3 41
   Output: 41 32 11 3 2 */ 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s1;
    stack<int> s2;
    stack<int> s3({41, 32, 1, 50, 5, 3, 10, 8, 2});

    s1.push(s3.top());
    s3.pop();

    while(!s3.empty())
    {
        if(s3.top() < s1.top())
        {
            while(s1.empty() != 1 && s3.top() < s1.top())
            {
                s2.push(s1.top());
                s1.pop();
            }

            s1.push(s3.top());
            s3.pop();

            while(!s2.empty())
            {
                s1.push(s2.top());
                s2.pop();
            }
        }
        else
        {
            s1.push(s3.top());
            s3.pop();
        }
    }

    cout<<s1.top();

    return 0;
}



