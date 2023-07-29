// Reverse the string using stack.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Ashish Is Name My ";
    string oneWord = "";
    stack<string> st;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
        {
            st.push(oneWord);
            oneWord = "";
        }
        else
        {
            oneWord += s[i];
        }
    }

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}