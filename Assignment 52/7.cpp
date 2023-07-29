/* Given an array arr[] consisting of N positive integers, the task is to find the count of
unique pairs (i, j) such that the sum of arr[i] and the reverse(arr[j]) is the same as the
sum of reverse(arr[i]) and arr[j] using unordered_map.
Example:
Input: arr[] = {2, 15, 11, 7}
Output: 3
Explanation:
The pairs are (0, 2), (0, 3) and (2, 3).
●(0, 2): arr[0] + reverse(arr[2]) (= 2 + 11 = 13) and reverse(arr[0]) + arr[2](= 2 +
11 = 13).
●(0, 3): arr[0] + reverse(arr[3]) (= 2 + 7 = 9) and reverse(arr[0]) + arr[3](= 2 + 7
= 9).
●(2, 3): arr[2] + reverse(arr[3]) (= 11 + 7 = 18) and reverse(arr[2]) + arr[3](= 11
+ 7 = 18).
Input: A[] = {22, 115, 7, 313, 17, 23, 22}
Output: 6 */

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int countPairsWithSameSum(vector<int>& arr) {
    int count = 0;
    unordered_map<int, int> freqMap;

    for (int num : arr) {
        int revNum = 0;
        int temp = num;

        // Calculate the reverse of num
        while (temp > 0) {
            revNum = revNum * 10 + temp % 10;
            temp /= 10;
        }

        int diff1 = num - revNum;
        int diff2 = revNum - num;

        count += freqMap[diff1];
        freqMap[diff2]++;
    }

    return count;
}

int main() {
    vector<int> arr = {2, 15, 11, 7};
    int result = countPairsWithSameSum(arr);
    cout << "Count of unique pairs: " << result << endl;
    return 0;
}