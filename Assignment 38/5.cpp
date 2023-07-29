// Input and add elements to a list C++ STL.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> li;
    cout<<"how element did you want to add: ";
    int n, i = 1;
    cin>>n;
    while(n--)
    {
        int value;
        cout<<"Enter "<< i++ <<" element to add: ";
        cin>>value;
        li.push_back(value);
    }
    cout<<accumulate(li.begin(), li.end(), 0);
    return 0;
}