// Sort an Array of Points by their distance from a reference Point

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct Point {
    int x;
    int y;
};

// Custom comparator function to compare points based on their distance from a reference point
bool comparePoints(const Point& a, const Point& b, const Point& ref) {
    // Calculate the squared distance from each point to the reference point
    int distA = pow(a.x - ref.x, 2) + pow(a.y - ref.y, 2);
    int distB = pow(b.x - ref.x, 2) + pow(b.y - ref.y, 2);

    // Compare the squared distances
    return distA < distB;
}

int main() {
    vector<Point> points = { {2, 3}, {1, 5}, {4, 2}, {3, 4} };
    Point reference = {0, 0};

    // Sort the array of points based on their distance from the reference point
    sort(points.begin(), points.end(), [&](const Point& a, const Point& b) {
        return comparePoints(a, b, reference);
    });

    // Print the sorted points
    cout << "Sorted Points:" << endl;
    for (const Point& p : points) {
        cout << "(" << p.x << ", " << p.y << ")" << endl;
    }

    return 0;
}
