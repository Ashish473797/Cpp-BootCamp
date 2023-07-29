/* Declare a multimap m1 of key-value pairs of integer type and then insert some pair
type data. Now print the multimap values of m1, and also create another multimap
m2 of the same type as m1 using m1.begin() and m1.end() as parameters. */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    multimap<int, int, greater<int>> m1;
    m1.insert({1, 2});
    m1.insert({2, 3});
    m1.insert({1, 2});
    m1.insert({2, 3});
    m1.insert({1, 2});
    m1.insert({2, 3});
    multimap<int, int> m2(m1.begin(), m1.end());
    for(auto i = m2.begin(); i != m2.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    return 0;
}