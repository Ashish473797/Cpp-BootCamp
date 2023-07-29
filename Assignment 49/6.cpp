/* Given an array arr[] consisting of N positive integers, the task is to find the number of
pairs such that the Greatest Common Divisor(GCD) of the pairs is not a prime
number. The pair (i, j) and (j, i) are considered the same.
Examples:
Input: arr[] ={ 2, 3, 9}
Output: 2
Explanation:
Following are the possible pairs whose GCD is not prime:
(0, 1): The GCD of arr[0](= 2) and arr[1](= 3) is 1.
(0, 2): The GCD of arr[0](= 2) and arr[2](= 9) is 1.
Therefore, the total count of pairs is 2.
Input: arr[] = {3, 5, 2, 10}
Output: 4 */

#include<bits/stdc++.h>
using namespace std;

int isPrime(int value)
{
    if(value == 1)
    return 0;
    int limit = sqrt(value);
    for(int i = 2; i < limit; i++)
    {
        if(value%i == 0)
        return 0;
    }
    return 1;
}

int findHcf(int a, int b)
{
    int hcf = 0;
    int small = a<b?a:b;
    for(int i = small; i >= 1; i--)
    {
        if(a%i == 0 && b%i == 0)
        {
            hcf = i;
            break;
        }
    }
    return hcf;
}

int findPair(int arr[], int size)
{
    int count = 0;
    for(int i = 0; i < size-1; i++)
    {
        for(int j = i; j < size; j++)
        {
            int hcf = findHcf(arr[i], arr[j]);
            if(!isPrime(hcf))
            {
                count++;
            }
        }
    }
    return count;
}
 
int main()
{
    int arr[] = { 2, 3, 9 };
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<findPair(arr, size);
    return 0;
}