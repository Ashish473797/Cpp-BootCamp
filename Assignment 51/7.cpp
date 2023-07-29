// Write a C++ program to illustrate the find() function in unordered_multiset.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_multiset<int> multiSet({ 1, 2, 1, 4, 5, 7, 10});
    if(multiSet.find(7) != multiSet.end())
    {
        cout<<"Found";
    }
    else
    cout<<"Not Found";
    return 0;
}