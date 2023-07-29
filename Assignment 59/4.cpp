// Implement Priority Queue using Linked Lists.

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node()
    {
        value = 0;
        next = NULL;
    }
};

class Queue
{
private:
    Node *front;
    Node *rear;
    int size;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
        size = 0;
    }

    void enque(int v)
    {
        Node *temp = new Node();
        temp->value = v;

        if (front == NULL)
        {
            front = temp;
            rear = temp;
        }
        else if(v > front->value)
        {
            temp->next = front;
            front = temp;
        }
        else if(v < rear->value)
        {
            rear->next = temp;
            rear = temp;
        }
        else
        {
            Node *t = front;
            while(t->next->value > v)
            {
                t = t->next;
            }
            temp->next = t->next;
            t->next = temp;
        }
        size++;
    }

    void deque()
    {
        if (size == 0)
        {
            cout << endl
                 << "Queue UnderFlow!" << endl;
        }
        else
        {
            Node *temp = front;
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
    Queue q;
    q.enque(1);
    q.enque(2);
    q.enque(10);
    q.enque(4);
    q.enque(50);
    q.enque(1);
    q.enque(20);
    q.enque(3);
    q.enque(40);
    q.enque(5);
    q.showData();
    cout << endl
         << "Size of the Queue is " << q.getSize() << endl;
    q.deque();
    q.showData();
    cout << endl
         << "Size of the Queue is " << q.getSize() << endl;
    q.deque();
    q.deque();
    q.deque();
    q.deque();
    q.showData();
    cout << endl
         << "Size of the Queue is " << q.getSize() << endl;
    q.deque();

    return 0;
}