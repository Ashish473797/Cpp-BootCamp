/* Given an array arr[] consisting of N integers and an integer X, the task is to perform
integer division on the array elements by X and print the indices of the array in
non-decreasing order of their quotients obtained.
Examples:
Input: N = 3, X = 3, order[] = {2, 7, 4}
Output: 1 3 2
Explanation:
After dividing the array elements by 3, the array modifies to {0, 2, 1}. Therefore,
the required order of output is 1 3 2.
Input: N = 5, X = 6, order[] = {9, 10, 4, 7, 2}
Output: 3 5 1 2 4
Explanation:
After dividing the array elements by 6, the array elements modify to 1 1 0 1 0.
Therefore, the required sequence is 3 5 1 2 4. */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool customComparator(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second; // Sort based on quotients in non-decreasing order
}

void printIndicesInNonDecreasingOrder(vector<int>& order, int X) {
    int n = order.size();
    vector<pair<int, int>> quotients;

    for (int i = 0; i < n; i++) {
        quotients.push_back(make_pair(i + 1, order[i] / X)); // Calculate quotients and store with corresponding indices
    }

    // Sort quotients in non-decreasing order while preserving their indices
    sort(quotients.begin(), quotients.end(), customComparator);

    // Print the indices in non-decreasing order of quotients
    for (const auto& p : quotients) {
        cout << p.first << " ";
    }
    cout << endl;
}

int main() {
    int N, X;
    cout << "Enter the value of N: ";
    cin >> N;
    cout << "Enter the value of X: ";
    cin >> X;

    vector<int> order(N);
    cout << "Enter the array elements: ";
    for (int i = 0; i < N; i++) {
        cin >> order[i];
    }

    cout << "Indices in non-decreasing order of quotients: ";
    printIndicesInNonDecreasingOrder(order, X);

    return 0;
}
