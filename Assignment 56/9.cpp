// In a singly linked list of characters, write a function that returns true if the given list is a palindrome, else false

#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<char> li({'N', 'I', 'T', 'I', 'N'});
    int count = 0;

    int midSize = li.size();

    for(int i = 0; i < midSize; i++)
    {
        if(li.front() == li.back())
        {
            count++;
        }

        li.pop_front();
        li.pop_back();
    }

    if(count == midSize)
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";

    return 0;
}