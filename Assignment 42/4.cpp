// Manage a queue for multiple input and store in ascending order of his first character

#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    array<string, 7> arr = {"Roshani", "Ashish", "Alok", "Arun", "Anamika", "Priya", "Samar"};
    sort(arr.begin(), arr.end(), greater<string>());
    for(int i = 0; i < arr.size(); i++)
    {
        q.push(arr[i]);
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}