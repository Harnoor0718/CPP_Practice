#include <iostream>
using namespace std;

int linearSearch(int target, int arr[], int size) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return target; // return index or target, as you wish
        }
    }
    return -1;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8};
    int target = 8;
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << linearSearch(target, arr, size);

    return 0;
}
