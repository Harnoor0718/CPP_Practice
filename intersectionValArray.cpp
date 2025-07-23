#include <iostream>
using namespace std;

int intersection(int arr1[], int arr2[], int sz1, int sz2) {
    int count = 0;
    cout << "Common elements: ";
    for(int i = 0; i < sz1; i++) {
        for(int j = 0; j < sz2; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                count++;
                break;
            }
        }
    }
    cout << endl;
    return count;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int sz1 = sizeof(arr1) / sizeof(int);
    int sz2 = sizeof(arr2) / sizeof(int);

    int commonCount = intersection(arr1, arr2, sz1, sz2);
    cout << "Number of common elements: " << commonCount << endl;

    return 0;
}
