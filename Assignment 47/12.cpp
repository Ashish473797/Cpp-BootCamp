// Create an unordered_map of tuples in C++

#include <iostream>
#include <unordered_map>
#include <tuple>

using namespace std;

int main() {
    // Create an unordered_map of tuples
    unordered_map<int, tuple<string, int>> myMap;

    // Insert elements into the unordered_map
    myMap.insert({ 1, make_tuple("John", 25) });
    myMap[2] = make_tuple("Jane", 30);

    // Access and modify elements in the unordered_map
    cout << "Value at key 1: " << get<0>(myMap[1]) << ", " << get<1>(myMap[1]) << endl;
    get<1>(myMap[1]) = 26;
    cout << "Modified value at key 1: " << get<0>(myMap[1]) << ", " << get<1>(myMap[1]) << endl;

    // Iterate over the unordered_map
    for (const auto& pair : myMap) {
        int key = pair.first;
        string name = get<0>(pair.second);
        int age = get<1>(pair.second);
        cout << "Key: " << key << ", Value: " << name << ", " << age << endl;
    }

    // Check if a key exists in the unordered_map
    int searchKey = 2;
    if (myMap.count(searchKey) > 0) {
        cout << "Key " << searchKey << " exists in the unordered_map." << endl;
    } else {
        cout << "Key " << searchKey << " does not exist in the unordered_map." << endl;
    }

    return 0;
}
