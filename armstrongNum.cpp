#include <iostream>
using namespace std;

void printDigits(int n) {
    while (n != 0) {
        int digit = n % 10;
        cout << digit << endl;
        n = n / 10;
    }
}

bool isArmstrong(int n){
    int copyN = n;
    int sum = 0;
    while(n != 0){
        int digit = n % 10;
        sum += (digit * digit * digit);
        n = n / 10;
    }
    return sum == copyN;
}

int main() {
    int n = 153;
    if(isArmstrong(n)){
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}
