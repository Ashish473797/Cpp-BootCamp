// Given an array arr[] consisting of N integers, the task is to find the maximum element
// with the minimum frequency using unordered_map.

#include<bits/stdc++.h>
using namespace std;

int maxWithMin(int arr[], int size)
{
    int max = INT_MIN;
    int min = INT_MAX;
    unordered_map<int, int> umap;
    for(int i = 0; i < size; i++)
    {
        umap[arr[i]]++;
    }
    for(auto i: umap)
    {
        if(i.second<min)
        min = i.second;
    }
    for(auto i: umap)
    {
        if(i.second == min)
        {
            if(i.first>max)
            max = i.first;
        }
    }
    return max;
}

int main()
{
    int arr[] = { 1, 2, 3, 1, 2, 3, 5, 7, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<maxWithMin(arr, size);
    return 0;
}