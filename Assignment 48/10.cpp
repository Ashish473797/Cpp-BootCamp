// Write a program that checks whether a given multimap is empty or not.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    multimap<int,int, greater<int>> mp{{5, 7}, {1, 8}, {8, 1}, {5, 9}, {1, 2}};
    if(mp.empty())
    {
        cout<<"map is empty";
    }
    else
    cout<<"map has some element";
}