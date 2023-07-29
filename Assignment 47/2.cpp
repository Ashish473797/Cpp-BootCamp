// Sorting Vector of Pairs by 1st element in ascending and 2nd element in descending.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool customComparator(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first == b.first) {
        return a.second > b.second; // Sort second element in descending order
    }
    return a.first < b.first; // Sort first element in ascending order
}

int main() {
    vector<pair<int, int>> pairs = { {3, 5}, {1, 2}, {2, 4}, {1, 3}, {3, 1} };

    cout << "Before sorting:" << endl;
    for (const auto& pair : pairs) {
        cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    cout << endl;

    sort(pairs.begin(), pairs.end(), customComparator);

    cout << "After sorting:" << endl;
    for (const auto& pair : pairs) {
        cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    cout << endl;

    return 0;
}
