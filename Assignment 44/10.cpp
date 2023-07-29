/* 
You have a set of integer s, which originally contains all the numbers from 1 to n.
Unfortunately, due to some error, one of the numbers in s got duplicated to another
number in the set, which results in repetition of one number and loss of another
number.You are given an integer array nums representing the data status of this set
after the error.Find the number that occurs twice and the number that is missing and
return them in the form of an array.
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    array<int, 5> arr = { 1, 2, 3, 3, 5};
    array<int, 2> result;
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] != i+1)
        {
            result[0] = arr[i];
            result[1] = i+1;
        }
    }
    cout<<result[0]<<" "<<result[1];
    return 0;
}