/* Given two sorted arrays A[] and B[] of sizes N and M respectively, the task is to
merge them in a sorted manner using priority_queue.
Example:
Input: A[] = { 5, 6, 8 }, B[] = { 4, 7, 8 }
Output:  4 5 6 7 8 8 */

#include<bits/stdc++.h>
using namespace std;

void printAll(priority_queue<int, vector<int>, greater<int>> pq)
{
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}

int main()
{
    int arr1[] = { 5, 6, 8 }, arr2[] = {4, 7, 8};
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < 3; i++)
    {
        pq.push(arr1[i]);
    }
    for(int i = 0; i < 3; i++)
    {
        pq.push(arr2[i]);
    }
    printAll(pq);
    return 0;
}