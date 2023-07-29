// how to find the upper bound of any desired element from the set.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s({ 1, 2, 3, 4, 5, 6 });
    auto a = s.lower_bound(3);
    cout<<*a<<endl;
    a = s.upper_bound(3);
    cout<<*a<<endl;
    a = s.lower_bound(1);
    cout<<*a<<endl;
    a = s.upper_bound(1);
    cout<<*a<<endl;
    a = s.lower_bound(7);
    cout<<*a<<endl;
    a = s.upper_bound(6);
    cout<<*a<<endl;
    return 0;
}