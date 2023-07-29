/* You are given an array A of size N. You need to insert the elements of A into a
multimap(element as key and index as value) and display the results. Also, you need
to erase a given element x from the multimap and print "erased x" if successfully
erased, else print "not found" */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    array<int, 8> a({ 1, 2, 3, 4, 5, 1, 3, 5});
    multimap<int, int> mp;
    for(int i = 0; i < a.size(); i++)
    {
        mp.insert({a[i], i});
    }
    for(auto i = mp.begin(); i != mp.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    cout<<"which Element did you want to erase: ";
    int value;
    cin>>value;
    int flag = 0;
    
        if(mp.count(value))
        {
            mp.erase(value);
            flag = 1;
            cout<<"Erased "<<value<<endl;
        }

    if(flag == 0)
    {
        cout<<"Not found"<<endl;
    }
    for(auto i = mp.begin(); i != mp.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    return 0;
}