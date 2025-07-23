#include<iostream>
#include<string>
#include<algorithm> // Required for reverse
using namespace std;

int main() {
    string str = "apna college";        // original string
    reverse(str.begin(), str.end());    // reverses the string in-place
    cout << str;                        // prints: egelloc anpa
    return 0;
}
