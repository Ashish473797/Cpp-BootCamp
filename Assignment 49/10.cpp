// Unordered_set operators in C++ STL(== and !=)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> uset1({1, 2, 3, 4, 5});
    unordered_set<int> uset2({1, 2, 3, 4, 5,7});

    if(uset1 == uset2)
    {
        cout<<"true";
    }
    else
    cout<<"false";
    if(uset1 != uset2)
    {
        cout<<"true";
    }
    else
    cout<<"false";
    return 0;
}