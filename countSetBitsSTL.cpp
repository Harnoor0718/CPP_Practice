#include <iostream>
#include <unordered_set>  // Not needed for this example, but kept as in original
using namespace std;

int main() {
    int n = 15;          // 32-bit integer (binary: 1111)
    long int n2 = 15;    // Typically 32-bit or 64-bit depending on system
    long long int n3 = 15; // 64-bit integer (binary: 1111)

    // Correct function names:
    cout << __builtin_popcount(n) << endl;      // For int (32-bit)
    cout << __builtin_popcountl(n2) << endl;    // For long (note 'l' suffix)
    cout << __builtin_popcountll(n3) << endl;   // For long long (note 'll' suffix)

    return 0;
}
