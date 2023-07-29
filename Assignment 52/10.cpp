/* Given string str, the task is to find the minimum count of characters that need to be
deleted from the string such that the frequency of each character of the string is
unique using unordered_map.
Example:
Input: str = “ceabaacb”
Output: 2
Explanation:
The frequencies of each distinct character are as follows:
c —> 2
e —> 1
a —> 3
b —> 2
Possible ways to make frequency of each character unique by minimum number of
moves are:
●Removing both occurrences of ‘c’ modifies str to “eabaab”
●Removing an occurrence of ‘c’ and ‘e’ modifies str to “abaacb”
Therefore, the minimum removals required is 2. */

#include<bits/stdc++.h>
using namespace std;

int delExtra(string str)
{
    int count = 0;
    unordered_map<char, int> umap;
    priority_queue<int> pq;
    for(int i = 0; i < str.size(); i++)
    {
        umap[str[i]]++;
    }
    for(auto i: umap)
    {
        pq.push(i.second);
    }

    while(!pq.empty())
    {
        int freq = pq.top();
        pq.pop();

        if(pq.empty()){
            return count;
        }
        if(freq == pq.top())
        {
            if(freq > 1)
            {
                pq.push(freq-1);
            }
            count++;
        }
    }
    return count;
}

int main()
{
    string str = "abbbcccd";
    cout<<delExtra(str);
    return 0;
}