// create a tuple and demonstrate all the inbuilt functions of tuples

#include <iostream>
#include <tuple>

using namespace std;

int main() {
    // Create a tuple
    tuple<int, string, double> myTuple(10, "Hello", 3.14);

    // Get the size of the tuple
    size_t size = tuple_size<decltype(myTuple)>::value;
    cout << "Size of the tuple: " << size << endl;

    // Access elements of the tuple using get() function
    int value1 = get<0>(myTuple);
    string value2 = get<1>(myTuple);
    double value3 = get<2>(myTuple);
    cout << "Values of the tuple: " << value1 << ", " << value2 << ", " << value3 << endl;

    // Modify elements of the tuple using get() and reference
    get<0>(myTuple) = 20;
    get<1>(myTuple) = "World";
    get<2>(myTuple) = 6.28;
    cout << "Modified values of the tuple: " << get<0>(myTuple) << ", " << get<1>(myTuple) << ", " << get<2>(myTuple) << endl;

    // Use tie() function to unpack a tuple into individual variables
    int a;
    string b;
    double c;
    tie(a, b, c) = myTuple;
    cout << "Unpacked values: " << a << ", " << b << ", " << c << endl;

    // Use make_tuple() to create a tuple from individual values
    auto newTuple = make_tuple(5, "Hi", 1.23);
    cout << "New tuple values: " << get<0>(newTuple) << ", " << get<1>(newTuple) << ", " << get<2>(newTuple) << endl;

    // Concatenate two tuples using tuple_cat()
    auto concatenatedTuple = tuple_cat(myTuple, newTuple);
    cout << "Concatenated tuple values: ";
    cout << get<0>(concatenatedTuple) << ", " << get<1>(concatenatedTuple) << ", " << get<2>(concatenatedTuple) << ", ";
    cout << get<3>(concatenatedTuple) << ", " << get<4>(concatenatedTuple) << ", " << get<5>(concatenatedTuple) << endl;

    return 0;
}
