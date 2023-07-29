// Count of distinct pair sums in a given Array arr[] of size N, the task is to find the total
// number of unique pair sums possible from the array elements.

#include<bits/stdc++.h>
using namespace std;

int cntDisPair(vector<int> v, int k)
{
    int count = 0;
    unordered_set<int> uset;
    unordered_set<int> useen;

    for(int i: v)
    {
        if(uset.find(k-i) != uset.end() && useen.find(i) == useen.end())
        {
            count++;
            useen.insert(i);
            useen.insert(k-i);
        }
        uset.insert(i);
    }
    return count;
}

int main()
{
    vector<int> v({1, 5, 1, 5, 2, 4 });
    int k = 6;
    cout<<cntDisPair(v,k);
    return 0;
}