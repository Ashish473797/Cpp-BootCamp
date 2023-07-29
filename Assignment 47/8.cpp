// Priority queue of pairs in C++ with ordering by first and second element

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

typedef pair<int, int> Pair;

struct PairComparator {
    bool operator()(const Pair& a, const Pair& b) const {
        if (a.first == b.first) {
            return a.second > b.second; // Order by second element in ascending order
        }
        return a.first < b.first; // Order by first element in ascending order
    }
};

int main() {
    priority_queue<Pair, vector<Pair>, PairComparator> pq;

    // Insert elements into the priority queue
    pq.push(make_pair(2, 5));
    pq.push(make_pair(1, 3));
    pq.push(make_pair(2, 4));
    pq.push(make_pair(1, 2));

    // Access the top element of the priority queue
    Pair topElement = pq.top();
    cout << "Top Element: (" << topElement.first << ", " << topElement.second << ")" << endl;

    // Remove elements from the priority queue
    pq.pop();

    // Access all elements of the priority queue
    while (!pq.empty()) {
        Pair element = pq.top();
        cout << "Element: (" << element.first << ", " << element.second << ")" << endl;
        pq.pop();
    }

    return 0;
}
