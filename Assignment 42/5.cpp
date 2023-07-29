// Schedule a interview by using applicant's reaching time using c++ STL.

#include<bits/stdc++.h>
using namespace std;

class Applicant
{
    public:
    string name;
    string time;
};

Applicant getApplicant()
{
    Applicant temp;
    cout<<"Enter Name of Applicant: ";
    cin>>temp.name;
    time_t now = time(0);
    char* date_time = ctime(&now);
    temp.time = date_time;
    return temp;
}

int main()
{
    queue<Applicant> q;
    for(int i = 0; i < 5; i++)
    {
        q.push(getApplicant());
    }
    Applicant temp;
    while(!q.empty())
    {
        temp = q.front();
        cout<<temp.name<<endl<<temp.time;
        q.pop();
    }
    return 0;
}