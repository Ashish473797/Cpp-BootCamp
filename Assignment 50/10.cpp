/*Given an array arr[] consisting of N integers, the task is to find the maximum element
with the minimum frequency using unordered_map.
Example:
Input: arr[] = {2, 2, 5, 50, 1}
Output: 50
Explanation:
The element with minimum frequency is {1, 5, 50}. The maximum element among
these element is 50.*/

#include<bits/stdc++.h>
using namespace std;

int maxWithMin(int arr[], int size)
{
    unordered_map<int, int> umap;
    set<int, greater<int>> s;
    for(int i = 0; i < size; i++)
    {
        umap[arr[i]]++;
    }
    for(auto i: umap)
    {
        if(i.second == 1)
        {
            s.insert(i.first);
        }
    }
    return *s.begin();
}

int main()
{
    int arr[] = { 2, 2, 5, 50, 1 };
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<maxWithMin(arr, size);

    return 0;
}