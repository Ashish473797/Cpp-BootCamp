/* Given an array of pairs A[][] of size N, the task is to find the longest subsequences
where the first element is increasing and the second element is decreasing.
Examples:
Input: A[]={{1, 2}, {2, 2}, {3, 1}}, N = 3
Output: 2
Explanation: The longest subsequence satisfying the conditions is of length 2 and
consists of {1, 2} and {3, 1};
Input: A[] = {{1, 3}, {2, 5}, {3, 2}, {5, 2}, {4, 1}}, N = 5
Output: 3 */

#include <iostream>
#include <vector>

using namespace std;

int longestSubsequence(vector<pair<int, int>>& pairs) {
    int n = pairs.size();
    vector<int> dp(n, 1);

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (pairs[i].first > pairs[j].first && pairs[i].second < pairs[j].second) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    int longest = 0;
    for (int i = 0; i < n; i++) {
        longest = max(longest, dp[i]);
    }

    return longest;
}

int main() {
    vector<pair<int, int>> pairs = {{1, 2}, {2, 2}, {3, 1}};
    int n = pairs.size();

    int result = longestSubsequence(pairs);

    cout << "Longest subsequence length: " << result << endl;

    return 0;
}
