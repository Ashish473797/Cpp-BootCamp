// Check if a given pair of Numbers are Betrothed numbers or not

#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the sum of proper divisors for a given number
int sumOfProperDivisors(int num) {
    int sum = 1; // Start with 1 as every number has 1 as a proper divisor
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }
    return sum;
}

// Function to check if a given pair of numbers is betrothed
bool areBetrothedNumbers(int a, int b) {
    int sumA = sumOfProperDivisors(a);
    int sumB = sumOfProperDivisors(b);
    return (sumA == b && sumB == a);
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    if (areBetrothedNumbers(num1, num2)) {
        cout << "The given numbers are betrothed." << endl;
    } else {
        cout << "The given numbers are not betrothed." << endl;
    }

    return 0;
}
