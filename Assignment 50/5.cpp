/* Given a positive integer N, the task is to print the nearest power of 2 of the
frequencies of each digit present in N. If there exists two nearest powers of 2 for any
frequency, print the larger one using unordered_map.
Example:
Input: N = 344422
Output:
2 -> 2
3 -> 1
4 -> 4
Explanation:
Frequency of the digit 3 is 1. Nearest power of 2 is 1.
Frequency of the digit 4 is 3. Nearest power of 2 is 4.
Frequency of the digit 2 is 2. Nearest power of 2 is 2. */

#include<bits/stdc++.h>
using namespace std;

void nearestPowerofTwo(unordered_map<char, int> &umap)
{
    for(auto &i: umap)
    {
        cout<<i.first<<" = ";

        int lg = log2(i.second);
        int a = pow(2, lg);
        int b = pow(2, lg+1);

        if((i.second - a) < (b - i.second))
        {
            cout<<a<<endl;
        }
        else
        cout<<b<<endl;
    }
}

void nearestFrequency(string &s)
{
    int size = s.size();
    unordered_map<char, int> umap;

    for(int i = 0; i < size; i++)
    {
        umap[s[i]]++;
    }

    nearestPowerofTwo(umap);
}

int main()
{
    string s = "344422";
    nearestFrequency(s);
    return 0;
}