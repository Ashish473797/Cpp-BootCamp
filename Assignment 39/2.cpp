/*Write a c++ code, in which create a forward list and assign values to it at the time of
initialization and print it on the console screen.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int> fl({ 1, 2, 3, 4, 5 });
    fl.push_front(0);
    fl.push_front(-1);
    for(auto i: fl)
    {
        cout<<i<<" ";
    }
    return 0;
}