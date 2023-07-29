// Iterate over the elements of an std::tuple in C++

#include <iostream>
#include <tuple>

using namespace std;

// Function to iterate over the elements of a tuple
template <typename Tuple, size_t Index = 0>
void iterateTuple(const Tuple& tuple) {
    if constexpr (Index < std::tuple_size<Tuple>::value) {
        // Print the current element
        cout << get<Index>(tuple) << " ";

        // Recursively call iterateTuple for the next element
        iterateTuple<Tuple, Index + 1>(tuple);
    }
}

int main() {
    // Create a tuple
    tuple<int, string, double> myTuple(10, "Hello", 3.14);

    // Iterate over the elements of the tuple
    iterateTuple(myTuple);
    
    return 0;
}
