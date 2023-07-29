// Given an array A[] consisting of positive integers, the task is to find the only array
// element with a single occurrence using unordered_map.

#include<bits/stdc++.h>
using namespace std;

void onlyOne(int arr[], int size)
{
    unordered_map<int, int> umap;
    for(int i = 0; i < size; i++)
    {
        umap[arr[i]]++;
    }
    for(auto i: umap)
    {
        if(i.second == 1)
        {
            cout<<i.first<<endl;
        }
    }
}

int main()
{
    int arr[] = { 1, 1, 2, 3, 3, 4, 5, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    onlyOne(arr, size);
    return 0;
}