// Write a function to print the element of a vector and take input from the user.

#include<bits/stdc++.h>
using namespace std;

void printElements(vector<int> vec)
{
    for(auto i: vec)
    {
        cout<<i<<" ";
    }
}
int main()
{
    vector<int> vec;
    int n, i = 1;
    cout<<"Enter the number Element: ";
    cin>>n;
    while(n--)
    {
        int value;
        cout<<"Enter "<< i++ <<" value: ";
        cin>>value;
        vec.push_back(value);
    }
    printElements(vec);
    return 0;
}