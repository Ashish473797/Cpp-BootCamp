// Get the first and last element of the list C++ STL

#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> li({1, 2, 3, 4, 5});
    cout<<"first element is: "<<li.front()<<endl;
    cout<<"last element is: "<<li.back();
    return 0;
}