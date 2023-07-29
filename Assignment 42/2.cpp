// Create a railways ticket counter and allot ticket to first come first take using c++ STL

#include<bits/stdc++.h>
using namespace std;
class Ticket
{
    string name;
    int ticketNo;
    friend Ticket ticketCounter();
    public:
    string getName()
    {
        return name;
    }
    int getTnum()
    {
        return ticketNo;
    }
};
Ticket ticketCounter()
{
    Ticket temp;
    cout<<"Enter Name: ";
    cin>>temp.name;
    srand(time(NULL));
    temp.ticketNo = rand();
    return temp;
}
void showTicketList(queue<Ticket> q)
{
    Ticket temp;
    while(!q.empty())
    {
        temp = q.front();
        cout<<"Name: "<<temp.getName()<<endl;
        cout<<"T.no: "<<temp.getTnum()<<endl;
        q.pop();
    }
}
int main()
{
    queue<Ticket> q;
    int size;
    cout<<"How many passenger are there: ";
    cin>>size;
    for(int i = 0; i < size; i++)
    {
        q.push(ticketCounter());
    }
    showTicketList(q);
    return 0;
}