#include <iostream>
#include <vector>
using namespace std;

int binaryRecursiveSearch(vector<int> arr, int target, int st, int end) {
    if (st <= end) {
        int mid = st + (end - st) / 2;
        if (target > arr[mid]) {
            return binaryRecursiveSearch(arr, target, mid + 1, end);
        } else if (target < arr[mid]) {
            return binaryRecursiveSearch(arr, target, st, mid - 1);
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int tar1 = 12;
    cout << binaryRecursiveSearch(arr1, tar1, 0, arr1.size() - 1) << endl;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
    int tar2 = 0;
    cout << binaryRecursiveSearch(arr2, tar2, 0, arr2.size() - 1) << endl;

    return 0;
}
