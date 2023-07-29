/* Given an array of pairs arr[] of size N (N ≥ 3) where each element of pair is at most N
and each pair is unique, the task is to determine the number of ways to select triplets
from the given N pairs that satisfy at least one of the following conditions:
1. The first value (a) of each pair should be distinct.
2. The second value (b) of each pair should be distinct. */

#include <iostream>

using namespace std;

int countTriplets(int arr[], int N) {
    // Counting the number of valid triplets where the first value (a) of each pair is distinct
    int condition1 = (N - 1) * (N - 2) * (N - 2);

    // Counting the number of valid triplets where the second value (b) of each pair is distinct
    int condition2 = (N - 1) * (N - 2) * (N - 2);

    // Counting the number of valid triplets satisfying both conditions
    int common = (N - 1) * (N - 2) * (N - 3);

    // Calculating the total number of valid triplets
    int totalTriplets = (2 * condition1) + (2 * condition2) - common;

    return totalTriplets;
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    if (N < 3) {
        cout << "Invalid input. N should be at least 3." << endl;
        return 0;
    }

    int arr[N * 2];
    cout << "Enter the array of pairs: ";
    for (int i = 0; i < N * 2; i++) {
        cin >> arr[i];
    }

    int numTriplets = countTriplets(arr, N);
    cout << "Number of ways to select triplets satisfying the conditions: " << numTriplets << endl;

    return 0;
}
