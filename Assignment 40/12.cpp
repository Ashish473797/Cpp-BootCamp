// Given a string S containing letters and ‘#‘. The ‘#” represents a backspace. The task is to print the new string without ‘#‘.
/*String after processing backspace characters using deque
Examples:
Input : S = "abc#de#f#ghi#jklmn#op#"
Output : abdghjklmo
Input : S = "##MySirG##Education##hub#"
Output : MySiEducatihu */

#include<bits/stdc++.h>
using namespace std;

string newString(string s)
{
    deque<char> d;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != '#')
        d.push_back(s[i]);
        else if( !d.empty())
        d.pop_back();
    }

    string newStr = "";
    for(auto i: d)
    {
        newStr += d.front();
        d.pop_front();
    }
    return newStr;
}

int main()
{
    string s = "##Hii#My#Name#Is#Ashish";
    cout<<newString(s);
    return 0;
}