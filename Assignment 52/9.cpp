// Given an array arr[], the task is to find the count of array elements whose squares
// are already present in the array using unordered_map.

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int countElementsWithSquarePresent(vector<int>& arr) {
    int count = 0;
    unordered_map<int, int> freqMap;

    // Count the frequencies of the square of each element
    for (int num : arr) {
        int square = num * num;
        freqMap[square]++;
    }

    // Check the count of elements whose squares are present
    for (int num : arr) {
        int square = num * num;
        if (freqMap[square] >= 2) {
            count++;
        }
    }

    return count;
}

int main() {
    vector<int> arr = {2, 3, 4, 5, 6, 8, 9, 12, 16, 16, 18, 20};
    int result = countElementsWithSquarePresent(arr);
    cout << "Count of array elements with squares present: " << result << endl;
    return 0;
}