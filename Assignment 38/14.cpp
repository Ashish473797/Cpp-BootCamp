// Access elements of a characters list using const_iterator in C++ STL 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<char> li;
    li.push_back('a');
    li.push_back('s');
    li.push_back('h');
    li.push_back('u');
    list<char>::const_iterator it = li.begin();
    for(it; it != li.end(); it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}