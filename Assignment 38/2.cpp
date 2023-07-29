// Assign the elements to the list (different methods) - Example of list::assign() | C++ STL.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> li1({ 1, 2, 4, 5 });
    list<int> li2;
    list<int>::iterator it = li1.begin();
    advance(it, 2);
    li1.insert(it, 3);
    for(auto i: li1)
    {
        cout<< i <<" ";
    }
    li1.assign(2, 2);
    cout<<endl;
    for(auto i: li1)
    {
        cout<< i <<" ";
    }
    li2.assign(li1.begin(), li1.end());
    cout<<endl;
    for(auto i: li2)
    {
        cout<< i <<" ";
    }
    
    return 0;
}