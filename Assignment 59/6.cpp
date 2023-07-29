// Implementation of Deque using doubly linked list.

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *prev;
    Node *next;

    Node()
    {
        value = 0;
        prev = NULL;
        next = NULL;
    }
};

class DQueue
{
private:
    Node *front;
    Node *rear;
    int size;

public:
    DQueue()
    {
        front = NULL;
        rear = NULL;
        size = 0;
    }

    int isEmpty()
    {
        if (size == 0)
            return 1;
        return 0;
    }

    void insertAtEnd(int v)
    {
        Node *temp = new Node();
        temp->value = v;

        if(rear == NULL)
        {
            rear = temp;
            front = temp;
        }
        else
        {
            temp->prev = rear;
            rear->next = temp;
            rear = temp;
        }
        size++;
    }

    void insertAtBegin(int v)
    {
        Node *temp = new Node();
        temp->value = v;

        if(rear == NULL)
        {
            rear = temp;
            front = temp;
        }
        else
        {
            temp->next = front;
            front->prev = temp;
            front = temp;
        }
        size++;
    }

    void delAtEnd()
    {
        if(isEmpty())
        {
            cout<<endl<<"Queue Underflow!"<<endl;
        }
        else
        {
            Node *temp = rear;
            rear->prev->next = NULL;
            rear = rear->prev;
            delete temp;
            size--;
        }
    }

    void delAtBegin()
    {
        if(isEmpty())
        {
            cout<<endl<<"Queue Underflow!"<<endl;
        }
        else
        {
            Node *temp = front;
            front->next->prev = NULL;
            front = front->next;
            delete temp;
            size--; 
        }
    }

    int getSize()
    {
        return size;
    }

    void showData()
    {
        if (size == 0)
        {
            cout << endl
                 << "Queue is Empty!" << endl;
            return;
        }
        Node *t = front;
        cout << endl;
        for (int i = 0; i < size; i++)
        {
            cout << t->value << " ";
            t = t->next;
        }
        cout << endl;
    }
};

int main()
{
    DQueue dq;
    dq.insertAtEnd(1);
    dq.insertAtEnd(2);
    dq.insertAtEnd(3);
    dq.showData();
    cout << endl
         << "Size of the Queue is " << dq.getSize() << endl;

    dq.insertAtBegin(4);     
    dq.insertAtBegin(5);     
    dq.insertAtBegin(6);     
    dq.showData();
    cout << endl
         << "Size of the Queue is " << dq.getSize() << endl;

    dq.delAtEnd();     
    dq.showData();
    cout << endl
         << "Size of the Queue is " << dq.getSize() << endl;

    dq.delAtBegin();     
    dq.showData();
    cout << endl
         << "Size of the Queue is " << dq.getSize() << endl;
    return 0;
}