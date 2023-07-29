// Efficiently implement k Queues in a single array.

#include <iostream>
#include <vector>

using namespace std;

class NQueues {
private:
    vector<int> arr;    // The array to store elements
    vector<int> front;  // Array to store front indices
    vector<int> rear;   // Array to store rear indices
    vector<int> next;   // Array to store next indices
    int free;           // Index of the first free slot in arr

public:
    NQueues(int k, int size) {
        arr.resize(size);
        front.resize(k, -1);
        rear.resize(k, -1);
        next.resize(size);

        // Initialize all slots as free
        free = 0;
        for (int i = 0; i < size - 1; i++)
            next[i] = i + 1;
        next[size - 1] = -1;
    }

    // Check if a queue is empty
    bool isEmpty(int qNum) {
        return front[qNum] == -1;
    }

    // Check if a queue is full
    bool isFull(int qNum) {
        return free == -1;
    }

    // Add an element to a queue
    void enqueue(int qNum, int item) {
        if (isFull(qNum)) {
            cout << "Queue " << qNum << " is full. Cannot enqueue " << item << endl;
            return;
        }

        int i = free;               // Get the first free slot
        free = next[free];          // Update the index of the first free slot

        if (isEmpty(qNum))
            front[qNum] = i;         // If the queue is empty, update the front index
        else
            next[rear[qNum]] = i;    // If the queue is not empty, update the next index of the rear

        rear[qNum] = i;              // Update the rear index
        arr[i] = item;               // Insert the item in the array
    }

    // Remove an element from a queue
    int dequeue(int qNum) {
        if (isEmpty(qNum)) {
            cout << "Queue " << qNum << " is empty. Cannot dequeue." << endl;
            return -1;
        }

        int i = front[qNum];         // Get the index of the front element
        front[qNum] = next[front[qNum]];  // Update the front index

        next[i] = free;              // Update the next index of the dequeued slot
        free = i;                    // Make the dequeued slot as free

        return arr[i];               // Return the dequeued item
    }
};

int main() {
    int numQueues = 3;
    int queueSize = 10;

    NQueues nq(numQueues, queueSize);

    nq.enqueue(0, 5);    // Enqueue 5 to queue 0
    nq.enqueue(1, 10);   // Enqueue 10 to queue 1
    nq.enqueue(2, 15);   // Enqueue 15 to queue 2

    cout << "Dequeued: " << nq.dequeue(0) << endl;   // Dequeue from queue 0
    cout << "Dequeued: " << nq.dequeue(1) << endl;   // Dequeue from queue 1
    cout << "Dequeued: " << nq.dequeue(2) << endl;   // Dequeue from queue 2

    return 0;
}
