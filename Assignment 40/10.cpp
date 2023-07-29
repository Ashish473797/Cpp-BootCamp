// Check if given Strings can be made equal by inserting at most 1 String using deque.

#include<bits/stdc++.h>
using namespace std;

int areSimilar(string s1, string s2)
{
    if(s1.size() == s2.size())
    {
        if(s1 == s2)
        return 1;
        return 0;
    }

    deque<string> X, Y;
    s1.push_back(' ');
    s2.push_back(' ');

    string temp = "";

    for(int i = 0; i < s1.size(); i++)
    {
        if(s1[i] != ' '){
            temp = temp+s1[i];
        }
        else{
            X.push_back(temp);
            temp = "";
        }
    }
    for(int i = 0; i < s2.size(); i++)
    {
        if(s2[i] != ' '){
            temp = temp+s2[i];
        }
        else{
            Y.push_back(temp);
            temp = "";
        }
    }
    while(X.size()>0 && Y.size()>0 && X.front()==Y.front())
    {
        X.pop_front();
        Y.pop_front();
    }
    while(X.size()>0 && Y.size()>0 && X.back()==Y.back())
    {
        X.pop_back();
        Y.pop_back();
    }
    if(X.empty() || Y.empty())
    return 1;
    
    return 0;
}

int main()
{
    string s1 = "Hii my Name is Ashish";
    string s2 = "Hii Ashish";

    if(areSimilar(s1, s2))
    cout<<"True";
    else
    cout<<"False";
    return 0;
}