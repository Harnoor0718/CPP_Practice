#include<iostream>
using namespace std;

void printPrimesUpTo(int n) {
    for(int num = 2; num <= n; num++) {
        bool isPrime = true;

        for(int i = 2; i <= num/2; i++) {
            if(num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) {
            cout << num << " ";
        }
    }
    cout << endl;
}

int main() {
    printPrimesUpTo(13);
    return 0;
}
