/* Given a string S, the task is to find the bracket numbers.
Example 1:
Input:  S = "(aa(bdc))p(dee)â€‹"
Output: 1 2 2 1 3 3 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "(())()";
    stack<int> st;
    int count = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(')
        {
            count++;
            cout<<count<<" ";
            st.push(count);
        }
        else if(s[i] == ')')
        {
            cout<<st.top()<<" ";
            st.pop();
        }
    }
    return 0;
}