#include <iostream>
using namespace std;

int main() {
    char str[] = "apna college";
    int len = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        len++;
    }

    cout << "length of string: " << len << endl;
    return 0;
}

