// Given Nodes with their priority, implement a priority queue using a doubly linked list.

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    int priority;
    Node *prev;
    Node *next;

    Node()
    {
        value = 0;
        priority = 0;
        prev = NULL;
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

    void enque(int v, int p)
    {
        Node *temp = new Node();
        temp->value = v;
        temp->priority = p;

        if (front == NULL)
        {
            front = temp;
            rear = temp;
        }
        else if (p > front->priority)
        {
            temp->next = front;
            front->prev = temp;
            front = temp;
        }
        else if (p < rear->priority)
        {
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
        }
        else
        {
            Node *t = front;
            while (t->next->priority > p)
            {
                t = t->next;
            }
            temp->next = t->next;
            temp->prev = t;
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
            front->prev = NULL;
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
    q.enque(1, 3);
    q.enque(3, 5);
    q.enque(7, 1);
    q.enque(2, 4);
    q.enque(9, 2);
    q.showData();
    cout << endl
         << "Size of the Queue is " << q.getSize() << endl;
    q.deque();
    q.showData();
    cout << endl
         << "Size of the Queue is " << q.getSize() << endl;
    return 0;
}