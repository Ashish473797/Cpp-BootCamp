// Write a program to Push and print elements in a float vector.

#include<bits/stdc++.h>
using namespace std;

void printElements(vector<float> vec)
{
    for(auto i: vec)
    {
        cout<<i<<" ";
    }
}
int main()
{
    vector<float> vec;
    int n, i = 1;
    cout<<"Enter the number Element: ";
    cin>>n;
    while(n--)
    {
        float value;
        cout<<"Enter "<< i++ <<" value: ";
        cin>>value;
        vec.push_back(value);
    }
    printElements(vec);
    return 0;
}