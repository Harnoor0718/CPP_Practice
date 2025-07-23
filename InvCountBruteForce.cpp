#include<iostream>
using namespace std;

int main() {
    int count = 0;
    int arr[] = {6, 3, 5, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                count++;
            }
        }
    }

    cout << "Number of inversions: " << count << endl;
    return 0;
}
