/* C++ Program to give two arrays with size n, maximise the first array by using the
elements from the second array such that the new array formed contains n greatest
but unique elements of both the arrays giving the second array priority (All elements
of second array appear before first array). The order of appearance of elements is
kept the same in output as in input.
Examples:
Input : arr1[] = {2, 4, 3}
arr2[] = {5, 6, 1}
Output : 5 6 4
As 5, 6 and 4 are maximum elements from two arrays giving the second array
higher priority. Order of elements is the same in output as in input.
Input : arr1[] = {7, 4, 8, 0, 1}
arr2[] = {9, 7, 2, 3, 6}
Output : 9 7 6 4 8 */

#include<bits/stdc++.h>
using namespace std;

void maxArray(int arr1[], int arr2[], int size)
{
    int arr3[size*2], k = 0;
    for(int i = 0; i < size; i++)
    arr3[k++] = arr1[i];
    for(int i = 0; i < size; i++)
    arr3[k++] = arr2[i];

    unordered_set<int> uset;

    sort(arr3, arr3+2*size, greater<int>());

    int i = 0;
    while(uset.size() != size)
    {
        if(uset.find(arr3[i]) == uset.end())
        {
            uset.insert(arr3[i]);
        }
        i++;
    }

    k = 0;
    for(int i = 0; i < size; i++)
    {
        if(uset.find(arr2[i]) != uset.end())
        {
            arr3[k++] = arr2[i];
            uset.erase(arr2[i]);
        }
    }
    for(int i = 0; i < size; i++)
    {
        if(uset.find(arr1[i]) != uset.end())
        {
            arr3[k++] = arr1[i];
            uset.erase(arr1[i]);
        }
    }
    for(int i = 0; i < size; i++)
    {
        cout<<arr3[i]<<" ";
    }
}

int main()
{
    int arr1[] = {7, 4, 8, 0, 1};
    int arr2[] = {9, 7, 2, 3, 6};
    int size = sizeof(arr1)/sizeof(arr1[0]);
    maxArray(arr1, arr2, size);
    return 0;
}