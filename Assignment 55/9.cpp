/* Given two strings s and t, return true if they are equal when both are typed into empty
text editors. '#' means a backspace character. Note that after backspacing an empty
text, the text will continue empty. */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a = "ab#c";
    string b = "ad#c";
    stack<char> s1;
    stack<char> s2;

    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == '#')
        {
            s1.pop();
        }
        else
        {
            s1.push(a[i]);
        }
    }
    for(int i = 0; i < b.size(); i++)
    {
        if(b[i] == '#')
        {
            s2.pop();
        }
        else
        {
            s2.push(b[i]);
        }
    }

    if(s1 == s2)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }

    return 0;
}