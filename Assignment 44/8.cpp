// Create a function to search the element in the set.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(10);
    s.insert(3);
    s.insert(1);
    s.insert(2);
    s.insert(18);
    
    cout<<*(s.find(10));
    
    return 0;
}