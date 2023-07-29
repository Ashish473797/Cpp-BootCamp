

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