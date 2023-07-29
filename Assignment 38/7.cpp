// Insert the element at beginning and end of the list | C++ STL

#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> li({1, 2, 3, 4, 5});
    li.insert(li.begin(), 10);
    li.insert(li.end(), 0);
    cout<<"first element is: "<<li.front()<<endl;
    cout<<"last element is: "<<li.back();
    return 0;
}