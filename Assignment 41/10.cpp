/*
Given an array, print the Next Greater Element (NGE) for every element using stack.
Example:
Input: arr[] = [ 4 , 5 , 2 , 25 ]
Output:  4      –>   5
5      –>   25
2      –>   25
25     –>   -1
*/

#include<bits/stdc++.h>
using namespace std;

void nextGreater(int arr[], int n)
{
    stack<int> s;
    s.push(arr[0]);

    for(int i = 1; i < n; i++)
    {
        if(s.empty())
        {
            s.push(arr[i]);
            continue;
        }
        while(s.empty() == false && s.top() < arr[i])
        {
            cout<<s.top()<<" --> "<<arr[i]<<endl;
            s.pop();
        }
        s.push(arr[i]);
    }
    while(s.empty() == false)
    {
        cout<<s.top()<<" --> "<<-1<<endl;
        s.pop();
    }
}

int main()
{
    int arr[] = {11, 13, 21, 3};
    nextGreater(arr, 4);
    return 0;
}