/* Reverse the Words of a String using Stack.
Example:
Input: str = “I Love To Code”
Output: Code To Love I */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "I Love To Code";
    str = str + " ";
    stack<string> s;
    string word = "";
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] != ' ')
        {
            word += str[i];
        }
        else{
            s.push(word);
            word = "";
        }
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}