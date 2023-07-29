/* Given an array arr[] of size N and three integers X, Y and K, the task is to count the
number of pairs (i, j) where i < j such that (arr[i] * X + arr[j] * Y) = K complete the task
using unordered_map.
Example:
Input: arr[] = {3, 1, 2, 3}, X = 4, Y = 2, K = 14
Output: 2
Explanation: The possible pairs are: (1, 2), (3, 4).
For i = 1, j = 2, Value of the expression = 4 * 3 + 2 * 1 = 14.
For i = 3, j = 4, Value of the expression = 4 * 2 + 2 * 3 = 14.
Input: arr[] = [1, 3, 2], X = 1, Y = 3, K = 7
Output: 1
Explanation: The possible pairs are: (1, 2).
For i = 1, j = 2, Value of the expression = 1 * 1 + 2 * 3 = 7 */

#include<bits/stdc++.h>
using namespace std;

int possiblePairs(int arr[], int size, int x, int y, int k)
{
    int count = 0;
    sort(arr, arr+size);
    for(int i = 0; i < size-1; i++)
    {
        for(int j = i; j < size; j++)
        {
            bool status = (arr[i] * x + arr[j] * y) == k? true : false;
            if(status)
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {3, 1, 2};
    int x = 1, y = 3, k = 7;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<possiblePairs(arr, size, x, y, k);
    return 0;
}