/* Given a stack with push(), pop(), empty() operations, delete the middle of the stack
without using any additional data structure.
Middle: ceil((size_of_stack+1)/2) (1-based index)
Example 1:
Input:
Stack = {1, 2, 3, 4, 5}
Output:
ModifiedStack = {1, 2, 4, 5}
Explanation:
As the number of elements is 5, hence the middle element will be the 3rd element
which is deleted
Example 2:
Input:
Stack = {1 2 3 4}
Output:
ModifiedStack = {1 3 4}
Explanation:
As the number of elements is 4, hence the middle element will be the 2nd element
which is deleted*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s1({1, 2, 3, 4, 5});
    stack<int> s2;
    int middle = s1.size()/2;

    while(!s1.empty())
    {
        if(middle != 0)
        {
            s2.push(s1.top());
        }
        s1.pop();
        middle--;
    }

    while(!s2.empty())
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }
    
    return 0;
}