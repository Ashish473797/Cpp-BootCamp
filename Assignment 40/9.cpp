// Generate a permutation of first N natural numbers having count of unique adjacent differences equal to K | Set 2 using queue.

#include<bits/stdc++.h>
using namespace std;

void permutation(int n, int k)
{
    deque<int> d;
    for(int i = 1;i <= n; i++)
    {
        d.push_back(i);
    }
    vector<int> ans;
    int front = 1;
    for(int i = 1; i <= n; i++)
    {
        if(front == 1)
        {
            ans.push_back(d.front());
            d.pop_front();
            if(k>1){
                front = 0;
            }
            k--;
        }
        else
        {
            ans.push_back(d.back());
            d.pop_back();
            if(k>1){
                front = 1;
            }
            k--;
        }
    }
    for(auto i: ans)
    {
        cout<<i<<" ";
    }
}

int main()
{
    int n, k;
    cout<<"Enter value for n and k: ";
    cin>>n>>k;
    permutation(n,k);
    return 0;
}