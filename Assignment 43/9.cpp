/* Given three arrays X[], Y[], and Z[] each consisting of N integers, the task is to find
the maximum number of triplets (X[i], Y[i], Z[i]) such that (X[i] < Y[i] < Z[i]) for any
permutation of the three arrays using priority_queue
Input: X = {9, 6, 14, 1,  8}, Y = {2, 10, 3, 12, 11}, Z = {15, 13, 5, 7, 4}
Output: 3
Explanation:
After rearranging the arrays X[], Y[] and Z[] as {1, 6, 8, 9, 14}, {3, 2, 10, 12, 11}, and
{4, 7, 15, 13, 5} respectively. The increasing triplets are {1, 3, 4}, {8, 10, 15} and {9,
12, 13}.
Therefore, the total count of such triplets is 3. */


#include<bits/stdc++.h>
using namespace std;

int maxTriplet(int x[], int y[], int z[], int size)
{
    int triplet = 0;
    sort(x, x+size);
    int a, b, c;

    priority_queue<int, vector<int>, greater<int>> py, pz;

    for(int i = 0; i < size; i++)
    {
        py.push(y[i]);
        pz.push(z[i]);
    }

    for(int i = 0; i < size; i++)
    {

        a = x[i];
        while(!py.empty() && py.top() <= a)
        py.pop();

        if(py.empty())
        break;

        b = py.top();
        py.pop();
        
        while(!pz.empty() && pz.top() <= b)
        pz.pop();

        if(pz.empty())
        break;

        c = pz.top();
        pz.pop();

        triplet++;
    }
    return triplet;
}

int main()
{
    int x[] = { 9, 6, 14, 1, 8 };
    int y[] = { 2, 10, 3, 12, 11 };
    int z[] = { 15, 13, 5, 7, 4 };
    int size = sizeof(x)/sizeof(x[0]);
    
    cout<<maxTriplet(x, y, z, size);

    return 0;
}