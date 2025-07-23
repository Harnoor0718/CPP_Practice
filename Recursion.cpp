#include<iostream>
using namespace std;

void printNums(int n) {
    if(n < 1) return; // base case to stop recursion

    cout << n << " ";
    printNums(n - 1);
}

int main() {
    printNums(4);
    return 0;
}
