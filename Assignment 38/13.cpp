// Push characters in a list and print them separated by space in C++ STL

#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<char> li;
    li.push_back('a');
    li.push_back('s');
    li.push_back('h');
    li.push_back('u');
    for(auto i: li)
    {
        cout<<i<<' ';
    }
    return 0;
}