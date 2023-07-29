// Converting String into Set in C++ STL.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string sg = "ashish";
    set<char> s;
    for(int i = 0; i < sg.size(); i++)
    {
        s.insert(sg[i]);
    }
    for(auto i: s)
    cout<<i<<" ";
    return 0;
}