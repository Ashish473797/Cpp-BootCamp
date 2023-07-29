/* C++ Program to Print all triplets in sorted array that form AP(or Arithmetic Progression)       
Example..Input : arr[] = { 2, 6, 9, 12, 17, 22, 31, 32, 35, 42 };
Output : 6 9 12, 2 12 22, 12 17 22, 2 17 32, 12 22 32, 9 22 35, 2 22 42, 22 32 42 */

#include<bits/stdc++.h>
using namespace std;

void printAllTriplet(int arr[], int size)
{
    unordered_set<int> uset;
    for(int i = 0; i < size-1; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            int diff = arr[j] - arr[i];
            if(uset.find(arr[i] - diff) != uset.end())
            {
                cout<<arr[i] - diff<<" "<<arr[i]<<" "<<arr[j]<<endl<<endl;
            }
        }
        uset.insert(arr[i]);
    }
}
int main()
{
    int arr[] = { 2, 6, 9, 12, 17, 22, 31, 32, 35, 42 };
    int size = sizeof(arr)/sizeof(arr[0]);
    printAllTriplet(arr, size);
    return 0;
}