// Write a c++ program to find freq of every word using unordered_map.

#include<bits/stdc++.h>
using namespace std;

void findRepeatition(string s)
{
    string temp = s + " ";
    unordered_map<string, int> umap;
    string str = "", ans = "";
    for(int i = 0; i < temp.size(); i++)
    {
        if(temp[i] != ' ')
        {
             str += temp[i];
        }
        else
        {
            umap[str]++;
            str = "";
        }
        
    }
    for(auto i = umap.begin(); i != umap.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
}

int main()
{
    string s = "is is is is is hi hi";
    findRepeatition(s);
    return 0;
}