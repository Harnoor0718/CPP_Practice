#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main() {
    pair<int, pair<char, int>> p = {1, {'h', 6}};

    cout << p.first << endl;
    cout << p.second.first << endl;
    cout << p.second.second << endl;

    return 0;
}
