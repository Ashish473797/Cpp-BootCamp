// Given an integer array nums , return an array answer such that answer[i] is equal to
// the product of all the elements of nums except nums[i] 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int product = 1;
    array<int, 5> num({ 1, 2, 3, 4, 5 });
    array<int, 5> ans;
    for(auto i: num)
    {
        product = product*i;
    }
    for(int i = 0; i < num.size(); i++)
    {
        ans[i] = product/(num[i]);
    }
    for(auto i: ans)
    {
        cout<<i<<" ";
    }
    return 0;
}