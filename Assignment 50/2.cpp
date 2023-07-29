/* Given a string, Find the 1st repeated word in a string using unordered_map.
Example:
Input : "Ravi had been saying that he had been there"
Output : had
Input : "Ravi had been saying that"
Output : No Repetition */

#include<bits/stdc++.h>
using namespace std;

void findRepeatition(string s)
{
    s += " ";
    unordered_map<string, int> umap;
    string str = "", ans = "";
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
        {
             umap[str]++;
             if(umap[str]>1)
             {
                ans += str;
                break;
             }
             str = "";
        }
        else
        {
            str += s[i];
        }
    }
    if(ans.size() == 0)
    cout<<"No Repetition";
    else
    cout<<ans;
}

int main()
{
    string s ="ravi ravi";
    findRepeatition(s);
    return 0;
}