// Find the first and last element using the STL array.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    array<int, 5>arr({1, 2, 3, 4, 5});
    cout<<"First element is: "<<arr.front()<<endl;
    cout<<"Last element is: "<<arr.back();
    return 0;
}