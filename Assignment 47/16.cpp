// Create a C++ program to demonstrate the working of forward list of tuples.

#include <iostream>
#include <forward_list>
#include <tuple>

using namespace std;

int main() {
    // Create a forward list of tuples
    forward_list<tuple<int, string, double>> myList;

    // Insert elements into the forward list
    myList.push_front(make_tuple(1, "John", 3.14));
    myList.push_front(make_tuple(2, "Jane", 2.71));
    myList.push_front(make_tuple(3, "Alice", 1.23));

    // Iterate over the elements of the forward list
    for (const auto& tuple : myList) {
        int value1 = get<0>(tuple);
        string value2 = get<1>(tuple);
        double value3 = get<2>(tuple);

        cout << "(" << value1 << ", " << value2 << ", " << value3 << ")" << endl;
    }

    // Modify an element in the forward list
    auto it = myList.begin();
    get<1>(*it) = "Bob";

    // Print the modified element
    cout << "Modified element: ";
    cout << "(" << get<0>(*it) << ", " << get<1>(*it) << ", " << get<2>(*it) << ")" << endl;

    return 0;
}
