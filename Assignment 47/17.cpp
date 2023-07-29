// Create a C++ program to implement max-heap priority queues of tuples.

#include <iostream>
#include <queue>
#include <tuple>

using namespace std;

// Custom comparator for the max-heap priority queue
template <typename... Args>
struct MaxHeapComparator {
    bool operator()(const tuple<Args...>& a, const tuple<Args...>& b) {
        // Compare the first element of the tuples
        return get<0>(a) < get<0>(b);
    }
};

int main() {
    // Create a max-heap priority queue of tuples
    priority_queue<tuple<int, string>, vector<tuple<int, string>>, MaxHeapComparator<int, string>> maxHeap;

    // Insert elements into the max-heap priority queue
    maxHeap.push(make_tuple(10, "John"));
    maxHeap.push(make_tuple(5, "Alice"));
    maxHeap.push(make_tuple(8, "Bob"));
    maxHeap.push(make_tuple(12, "Jane"));

    // Print the elements in the max-heap priority queue
    while (!maxHeap.empty()) {
        cout << get<0>(maxHeap.top()) << ", " << get<1>(maxHeap.top()) << endl;
        maxHeap.pop();
    }

    return 0;
}
