// Write a program to check whether an element exists in a vector or not.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec({1, 2, 3, 4, 5});
    int num;
    cout<<"Enter number: ";
    cin>>num;
    auto it = find(vec.begin(), vec.end(), num);
    if(it != vec.end())
    {
        cout<<"Element found at index: "<<it - vec.begin()+1;
    }
    else{
        cout<<"Not Found";
    }
    return 0;
}