// Create a Stack using a singly linked list.

#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        Node *prev;

        Node()
        {
            value = 0;
            prev = NULL;
        }
};

class Stack
{
    private:
        Node *head;
        int size;

    public:
        Stack()
        {
            head = NULL;
            size = 0;
        }

        bool isEmpty()
        {
            if(head == NULL)
            return true;
            return false;
        }

        void push(int v)
        {
            Node *temp = new Node();
            temp->value = v;

            if(isEmpty())
            {
                head = temp;
            }
            else
            {
                temp->prev = head;
                head = temp;
            }
        }

        void pop()
        {
            if(isEmpty())
            {
                cout<<endl<<"Stack UnderFlow!"<<endl;
            }
            else
            {
                Node *temp = head;
                head = head->prev;
                delete temp;
            }   
        }

        int top()
        {
            if(isEmpty())
            {
                cout<<endl<<"Stack UnderFlow!"<<endl;
            }
            else
            {
                return head->value;
            }
        }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    while(!s.isEmpty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}