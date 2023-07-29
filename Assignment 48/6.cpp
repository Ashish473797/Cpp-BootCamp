// Write a program to find some key value pairs and print on the console.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    multimap<int,int, greater<int>> mp{{5, 7}, {1, 8}, {8, 1}, {5, 9}, {1, 2}};
    for(auto i = mp.begin(); i != mp.end(); i++)
    {
        if(i->first == 1)
        {
            cout<<i->first<<" "<<i->second<<endl;
        }
    }
    
    return 0;
}