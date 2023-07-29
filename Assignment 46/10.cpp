/*  Given a positive integer N, the task is to check whether N can be represented as the
difference between two positive perfect cubes or not. If found to be true, then print
“Yes”. Otherwise, print “No” using a map.
Example:
Input: N = 124
Output: Yes
Explanation: Since 124 can be represented as (125 – 1) = (5^3 – 1^3). Therefore, print
Yes.
*/

#include<bits/stdc++.h>
using namespace std;

string check_cubes_difference(int N) {
    
}

int main() {
    int N;
    cout<<"Enter Number: ";
    cin >> N;
    cout << check_cubes_difference(N) << endl;
    return 0;
}