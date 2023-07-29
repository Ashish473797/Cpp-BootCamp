/* Given an expression string x. Examine whether the pairs and the orders of
“{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
For example, the function should return 'true' for exp = “[()]{}{[()()]()}” and 'false' for
exp = “[(])”. */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string bracket = "[()]()";
    stack<char> s;
    for(int i = 0; i < bracket.size(); i++)
    {
        if(bracket[i] == '}')
        {
            if(s.top() == '{')
            {
                s.pop();
            }
        }
        else if(bracket[i] == ')')
        {
            if(s.top() == '(')
            {
                s.pop();
            }
        }
        else if(bracket[i] == ']')
        {
            if(s.top() == '[')
            {
                s.pop();
            }
        }
        else
        {
            s.push(bracket[i]);
        }
    }
    if(s.empty())
    {
        cout<<"Valid Bracket!";
    }
    else
    {
        cout<<"InValid Bracket!";
    }
    return 0;
}