// Create a Queue using Array or Dynamic Array.

#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
    int arr[100];
    int front;
    int rear;
    int size;
    int capacity;

public:
    Queue()
    {
        front = -1;
        rear = -1;
        size = 0;
        capacity = 100;
    }

    void enque(int v)
    {
        if (front == -1)
        {
            front++;
            rear++;
            arr[rear] = v;
            size++;
        }
        else if (rear == capacity - 1)
        {
            cout << endl
                 << "Queue OverFlow!";
        }
        else
        {
            rear++;
            arr[rear] = v;
            size++;
        }
    }

    void deque()
    {
        if (front == -1)
        {
            cout << endl
                 << "Queue UnderFlow!";
        }
        else if (front == rear)
        {
            front = rear = -1;
            size = 0;
        }
        else
        {
            front++;
            size--;
        }
    }

    int getSize()
    {
        return size;
    }

    void showData()
    {
        if (front == -1)
        {
            cout << endl
                 << "Queue is Empty" << endl;
            return;
        }
        cout << endl;
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q;
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);
    q.enque(5);
    q.showData();
    cout << endl
         << "Size of Queue is " << q.getSize() << endl;
    q.deque();
    q.showData();
    cout << endl
         << "Size of Queue is " << q.getSize() << endl;
    return 0;
}