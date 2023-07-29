// Create an unordered_map and Initialize it from another map using the copy constructor

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, string> oldumap;
    oldumap["ground"] = "glass";
    oldumap["floor"] = "apple";
    oldumap["table"] = "orange";

    unordered_map<string, string> newumap(oldumap);

    for(auto i: newumap)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}