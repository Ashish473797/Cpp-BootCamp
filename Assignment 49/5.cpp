/* C++ Program to given an array of positive and negative numbers, find if there is a
subarray (of size at-least one) with 0 sum.
Examples :
Input: {4, 2, -3, 1, 6}
Output: true
Explanation:
There is a subarray with zero sum from index 1 to 3.
Input: {4, 2, 0, 1, 6}
Output: true
Explanation:
There is a subarray with zero sum from index 2 to 2. */

#include<bits/stdc++.h>
using namespace std;

int subArrayExists(int arr[], int size)
{
    unordered_set<int> uset;

    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
        if(sum == 0 || uset.find(sum) != uset.end())
        {
            return 1;
        }
        uset.insert(sum);
    }
    return 0;
}

int main()
{
    int arr[] = { 4, 2, 0, 1, 8 };
    int size = sizeof(arr)/sizeof(arr[0]);

    if(subArrayExists(arr, size))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}