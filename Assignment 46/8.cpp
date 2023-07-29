/* Given a string s of length N, containing digits written in words but in jumbled form, the
task is to find out the digits present in the string in word form and arrange them in
sorted order using map
Example:
Input:  s = “ozerotwneozero”
Output: 0012
Explanation: The string can be arranged as “zerozeroonetwo”.
Therefore the digits are 0, 0, 1 and 2. */

#include<bits/stdc++.h>
using namespace std;

string digit(string s)
{
    string ans = "";
    map<char, int> m;
    for(int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    while(m['z'] && m['e'] && m['r'] && m['o'])
    {
        m['z']--;
        m['e']--;
        m['r']--;
        m['o']--;
        ans += "0";
    }
    while(m['o'] && m['n'] && m['e'])
    {
        m['o']--;
        m['n']--;
        m['e']--;
        ans += "1";
    }
    while(m['t'] && m['w'] && m['o'])
    {
        m['t']--;
        m['w']--;
        m['o']--;
        ans += "2";
    }
    while(m['t'] && m['h'] && m['r'] && m['e'] && m['e'])
    {
        m['t']--;
        m['h']--;
        m['r']--;
        m['e']--;
        m['e']--;
        ans += "3";
    }
    while(m['f'] && m['o'] && m['u'] && m['r'])
    {
        m['f']--;
        m['o']--;
        m['u']--;
        m['r']--;
        ans += "4";
    }
    while(m['f'] && m['i'] && m['v'] && m['e'])
    {
        m['f']--;
        m['i']--;
        m['v']--;
        m['e']--;
        ans += "5";
    }
    while(m['s'] && m['i'] && m['x'])
    {
        m['s']--;
        m['i']--;
        m['x']--;
        ans += "6";
    }
    while(m['s'] && m['e'] && m['v'] && m['e'] && m['n'])
    {
        m['s']--;
        m['e']--;
        m['v']--;
        m['e']--;
        m['n']--;
        ans += "7";
    }
    while(m['e'] && m['i'] && m['g'] && m['h'] && m['t'])
    {
        m['e']--;
        m['i']--;
        m['g']--;
        m['h']--;
        m['t']--;
        ans += "8";
    }
    while(m['n'] && m['i'] && m['n'] && m['e'])
    {
        m['n']--;
        m['i']--;
        m['n']--;
        m['e']--;
        ans += "0";
    }
    return ans;
}

int main()
{
    string s = "ozerotwneozero";
    cout<<digit(s);
    return 0;
}