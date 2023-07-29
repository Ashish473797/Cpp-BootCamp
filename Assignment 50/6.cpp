/* Given two integers L, R, and an integer K, the task is to print all the pairs of Prime
Numbers from the given range whose difference is K using unordered_map.
Example:
Input: L = 1, R = 19, K = 6
Output: (5, 11) (7, 13) (11, 17) (13, 19)
Explanation: The pairs of prime numbers with difference 6 are (5, 11), (7, 13), (11,
17), and (13, 19) */

#include<bits/stdc++.h>
using namespace std;

int isPrime(int value)
{
    if(value == 1)
    return 0;
    for(int i = 2; i <= sqrt(value); i++)
    {
        if(value % i == 0)
        return 0;
    }
    return 1;
}

set<int> getPrimeSet(int L, int R)
{
    set<int> s1;
    for(int i = L; i <= R; i++)
    {
        if(isPrime(i))
        {
        s1.insert(i);
        }
    } 
    return s1;
}

void getPrimePairs(int L, int R, int K)
{
    set<int> s = getPrimeSet(L,R);
    for(auto i: s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    unordered_map<int, int> umap;
    for(auto i = s.begin(); i != s.end(); i++)
    {
        if(s.find(*i + K) != s.end())
        {
            umap[*i] = *i+K;
        }
    }
    for(auto i = umap.begin(); i != umap.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
}

int main()
{
    int L = 1, R = 19, K = 6;
    getPrimePairs(L, R, K);
    return 0;
}