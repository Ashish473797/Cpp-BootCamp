// Implementation of lower_bound() and upper_bound() in Array of Pairs in C++

#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

typedef pair<int, int> Pair;

bool comparePairs(const Pair& a, const Pair& b) {
    return a.first < b.first;
}

int main() {
    Pair arr[] = { {1, 2}, {2, 3}, {3, 4}, {4, 5}, {5, 6} };
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;

    // Sort the array of pairs based on the first element
    sort(arr, arr + n, comparePairs);

    // Find the lower bound
    auto lower = lower_bound(arr, arr + n, make_pair(key, 0), comparePairs);

    // Find the upper bound
    auto upper = upper_bound(arr, arr + n, make_pair(key, 0), comparePairs);

    cout << "Lower Bound: (" << lower->first << ", " << lower->second << ")" << endl;
    cout << "Upper Bound: (" << upper->first << ", " << upper->second << ")" << endl;

    return 0;
}
