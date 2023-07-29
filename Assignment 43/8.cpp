/* Given an array arr[] of N elements, the task is to perform using priority_queue and
the following operation:
● Pick the two largest element from the array and remove these element. If the
elements are unequal then insert the absolute difference of the elements into the
array.
● Perform the above operations until the array has 1 or no element in it. If the array has
only one element left then print that element, else print “-1”.
Example:
Input: arr[] = { 3, 5, 2, 7 }
Output: 1
Explanation:
The two largest elements are 7 and 5. Discard them. Since both are not equal, insert
7 – 5 = 2 into the array. Hence, arr[] = { 3, 2, 2 }
The two largest elements are 3 and 2. Discard them. Since both are not equal, insert
3 – 2 = 1 into the array. Hence, arr[] = { 1, 2 }
The two largest elements are 2 and 1. Discard them. Since both are not equal, insert
2 – 1 = 1 into the array. Hence, arr[] = { 1 }
The only element left is 1. Print the value of the only element left */

#include<bits/stdc++.h>
using namespace std;

void discart(priority_queue<int> &pq)
{
    int firstLargest, secondLagest;
    firstLargest = pq.top();
    pq.pop();
    secondLagest = pq.top();
    pq.pop();
    if(firstLargest != secondLagest)
    {
        pq.push(abs(firstLargest - secondLagest));
    }
}

int main()
{
    int arr[] = { 4, 6, 2, 5, 7 };
    int size = sizeof(arr)/sizeof(arr[0]);

    priority_queue<int> pq;
    for(int i = 0; i < size; i++)
    {
        pq.push(arr[i]);
    }
    while(pq.size()>1)
    {
        discart(pq);
    }
    if(pq.size() == 1)
    {
        cout<<pq.top();
    }
    else
    {
        cout<<-1;
    }
    return 0;
}