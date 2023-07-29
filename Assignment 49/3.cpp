/* C++ Program for Number of unique triplets whose XOR is zero.
Input : a[] = {1, 3, 5, 10, 14, 15};
Output : 2
Explanation : {1, 14, 15} and {5, 10, 15} are the
unique triplets whose XOR is 0.
{1, 14, 15} and all other combinations of
1, 14, 15 are considered as 1 only.
Input : a[] = {4, 7, 5, 8, 3, 9};
Output : 1
Explanation : {4, 7, 3} is the only triplet whose XOR is 0 */

#include<bits/stdc++.h>
using namespace std;

int countAllTriplet(int arr[], int size)
{
    unordered_set<int> uset;
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        uset.insert(arr[i]);
    }
    for(int i = 0; i < size-1; i++)
    {
        for(int j = i; j < size; j++)
        {
            int xr = arr[i] ^ arr[j];
            if(uset.find(xr) != uset.end() && xr != arr[i] && xr != arr[j])
            {
                count++;
            }
        }
    }
    return count/3;
}

int main()
{
    int arr[] = {1, 3, 5, 10, 14, 15};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<countAllTriplet(arr, size);
    return 0;
}