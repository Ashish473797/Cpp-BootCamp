// Sorting of Vector of Tuple in C++ (Descending Order)

#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

// Custom comparator function to sort tuples in descending order
template <typename... Args>
bool descendingComparator(const tuple<Args...>& a, const tuple<Args...>& b) {
    return a > b;
}

int main() {
    // Create a vector of tuples
    vector<tuple<int, string, double>> myVector = {
        make_tuple(2, "Hello", 3.14),
        make_tuple(1, "World", 2.71),
        make_tuple(3, "Foo", 1.23)
    };

    // Sort the vector of tuples in descending order
    sort(myVector.begin(), myVector.end(), descendingComparator<int, string, double>);

    // Print the sorted vector of tuples
    for (const auto& tuple : myVector) {
        cout << "(" << get<0>(tuple) << ", " << get<1>(tuple) << ", " << get<2>(tuple) << ")" << endl;
    }

    return 0;
}
