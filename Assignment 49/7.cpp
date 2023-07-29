/* Given an array of strings arr[] of size N, the task is to print all the distinct strings
present in the given array.
Examples:
Input: arr[] = { “Good”, “God”, “Good”, “God”, “god” }
Output: god Good God */

#include<bits/stdc++.h>
using namespace std;

void findUniqueString(string arr[], int size)
{
    unordered_set<string> uset;
    for(int i = 0; i < size; i++)
    {
        uset.insert(arr[i]);
    }
    for(auto i: uset)
    {
        cout<<i<<" ";
    }
}

int main()
{
    string arr[] = {"Good", "God", "Good", "God", "god"};
    int size = sizeof(arr)/sizeof(arr[0]);
    findUniqueString(arr, size);
    return 0;
}