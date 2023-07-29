// Write a c++ program to demonstrate implementation of find function in unordered_map.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, float> umap;
    umap["pi"] = 3.14;
    umap["hi"] = 89;

    if(umap.find("hi") != umap.end())
    {
        cout<<"String is found";
    }
    else
    {
        cout<<"String not found";
    }
    return 0;
}