/* Given an array arr[] of N integer elements, the task is to change the minimum
number of elements of this array such that it contains first N terms of the Catalan
Sequence. Thus, find the minimum changes required using unordered_multiset.
First few Catalan numbers are 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, .....
Examples:
Input: arr[] = {4, 1, 2, 33, 213, 5}
Output: 3
We have to replace 4, 33, 213 with 1, 14, 42 to make the first 6 terms of Catalan
sequence.
Input: arr[] = {1, 1, 2, 5, 41}
Output: 1
Simply change 41 with 14 */

#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
#define ll long long int

ll catalan[MAX];

void catalanDp(ll size)
{
    catalan[0] = catalan[1] = 1;
    for(int i = 2; i <= size; i++)
    {
        catalan[i] = 0;
        for(int j = 0; j < i; j++)
        {
            catalan[i] += catalan[j] * catalan[i-j-1];
        }
    }
}

int catalanSeries(int arr[], int size)
{
    catalanDp(size);
    
    unordered_multiset<int> multiSet;

    int a = 1, b = 1;
    int c;

    multiSet.insert(a);
    if(size >= 2)
    multiSet.insert(b);

    for(int i = 2; i < size; i++)
    {
        multiSet.insert(catalan[i]);
    }

    unordered_multiset<int>::iterator it;
    for(int i = 0; i < size; i++)
    {
        it = multiSet.find(arr[i]);
        if( it != multiSet.end())
        {
            multiSet.erase(it);
        }
    }
    return multiSet.size();
}

int main()
{
    int arr[] = { 1, 1, 2, 5, 41 };
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<< catalanSeries(arr, size);

    return 0;
}