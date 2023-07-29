// Write a C++ program to illustrate the bucket_count() function in unordered_multiset.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_multiset<int> m({ 1, 2, 3, 4, 5});
    cout<<m.bucket_count()<<endl;
    return 0;
}