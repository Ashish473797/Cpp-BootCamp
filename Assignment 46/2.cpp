// Create a map, where insert keys and values as string type and integer type
// respectively and print it on the screen

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;
    m.insert({"score 1 = ", 95});
    m.insert({"score 2 = ", 100});
    for(auto i = m.begin(); i != m.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    return 0;
}