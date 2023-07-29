// Implementation of lower_bound() and upper_bound() in List of Pairs in C++

#include <iostream>
#include <list>

using namespace std;

typedef pair<int, int> Pair;

list<Pair>::iterator lowerBound(list<Pair>& lst, int key) {
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        if (it->first >= key) {
            return it;
        }
    }
    return lst.end(); // If key is greater than all elements
}

list<Pair>::iterator upperBound(list<Pair>& lst, int key) {
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        if (it->first > key) {
            return it;
        }
    }
    return lst.end(); // If key is greater than or equal to all elements
}

int main() {
    list<Pair> pairs = { {1, 2}, {2, 3}, {3, 4}, {4, 5}, {5, 6} };
    int key = 3;

    auto lower = lowerBound(pairs, key);
    auto upper = upperBound(pairs, key);

    cout << "Lower Bound: (" << lower->first << ", " << lower->second << ")" << endl;
    cout << "Upper Bound: (" << upper->first << ", " << upper->second << ")" << endl;

    return 0;
}
