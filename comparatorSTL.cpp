#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Custom comparator function
bool comparePairs(const pair<int, int>& p1, const pair<int, int>& p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    // If seconds are equal, compare by first element
    return p1.first < p2.first;
}

int main() {
    vector<pair<int, int>> vec = {{3, 1}, {2, 1}, {7, 1}, {5, 2}};

    // Sort using the custom comparator
    sort(vec.begin(), vec.end(), comparePairs);

    // Print the sorted pairs
    for(auto p : vec) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
