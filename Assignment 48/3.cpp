// Write a c++ code for illustration of multimap::swap() function.

#include<bits/stdc++.h>
using namespace std;
void print(multimap<int, int> mp)
{
    for(auto i = mp.begin(); i != mp.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
}
int main()
{
    multimap<int, int> m1;
    m1.insert({1, 2});
    m1.insert({1, 3});
    m1.insert({1, 2});
    multimap<int, int> m2;
    m2.insert({2, 3});
    m2.insert({2, 2});
    m2.insert({2, 3});

    m1.swap(m2);

    print(m1);
    print(m2);
    
    return 0;
}