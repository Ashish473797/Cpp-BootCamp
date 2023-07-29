/* You are given the string S . Compress the string when lower and upper cases are the
same. In compressed string characters should be in lowercase.
Example 1:
Input: S = "aaABBb"
Output: "3a3b" */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "aaabbbbcca1";
    stack<int> s1;
    stack<char> s2;
    stack<string> s3;
    int cnt = 1;

    s2.push(s[0]);

    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] == s2.top())
        {
            cnt++;
        }
        else
        {
            s1.push(cnt);
            s2.push(s[i]);
            cnt = 1;
        }
    }
    s2.pop();

    while(!s1.empty())
    {
        string temp = "";
        temp += to_string(s1.top());
        temp += s2.top();
        s3.push(temp);
        s1.pop();
        s2.pop();
        temp = "";
    }

    while(!s3.empty())
    {
        cout<<s3.top();
        s3.pop();
    }
    return 0;
}