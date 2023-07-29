/* Given an array arr[] of size N and a number K, the task is to find the length of the
smallest subsequence such that the sum of the subsequence is greater than or equal
to number K do it using priority_queue.
Example:
Input: arr[] = {2, 3, 1, 5, 6, 3, 7, 9, 14, 10, 2, 5}, K = 35
Output: 4
Smallest subsequence with the sum greater than or equal to the given sum K is {7, 9,
14, 10}
Input: arr[] = {1, 2, 2, 2, 3, 4, 5, 4, 7, 6, 5, 12}, K = 70
Output:-1
Subsequence with sum greater than equal to the given sum is not possible. */

#include<bits/stdc++.h>
using namespace std;

int subSequence(int arr[], int k, int size)
{
    int sum = 0, count = 0;
    priority_queue<int> pq;
    for(int i = 0; i < size; i++)
    {
        pq.push(arr[i]);
    }
    while(!pq.empty())
    {
        sum += pq.top();
        pq.pop();
        count++;
        if(sum >= k)
        break;
    }
    if(pq.empty() && sum < k)
    return -1;
    return count;
}

int main()
{
    int arr[] = { 1, 2, 2, 2, 3, 4, 5, 4, 7, 6, 5, 12 };
    int k = 70;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<subSequence(arr, k, size);
    return 0;
}