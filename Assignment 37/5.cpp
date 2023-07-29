// Find largest and smallest elements in a vector.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec({4, 1, 7, 10, 2, 3, 5});
    cout<<*max_element(vec.begin(), vec.end())<<endl;
    cout<<*min_element(vec.begin(), vec.end())<<endl;
    return 0;
}