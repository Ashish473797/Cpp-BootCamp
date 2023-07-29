// Create a C++ program to implement the deque of pairs.

#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<pair<int, string>> pairDeque;

    // Inserting elements at the front
    pairDeque.push_front(make_pair(1, "Alice"));
    pairDeque.push_front(make_pair(2, "Bob"));

    // Inserting elements at the back
    pairDeque.push_back(make_pair(3, "Charlie"));
    pairDeque.push_back(make_pair(4, "David"));

    // Accessing elements
    cout << "Front element: (" << pairDeque.front().first << ", " << pairDeque.front().second << ")" << endl;
    cout << "Back element: (" << pairDeque.back().first << ", " << pairDeque.back().second << ")" << endl;

    // Iterating over the deque
    cout << "Deque elements:" << endl;
    for (const auto& pair : pairDeque) {
        cout << "(" << pair.first << ", " << pair.second << ")" << endl;
    }

    // Removing elements from the front
    pairDeque.pop_front();
    pairDeque.pop_front();

    // Removing elements from the back
    pairDeque.pop_back();

    // Checking if the deque is empty
    if (pairDeque.empty()) {
        cout << "Deque is empty." << endl;
    } else {
        cout << "Deque is not empty." << endl;
    }

    return 0;
}
