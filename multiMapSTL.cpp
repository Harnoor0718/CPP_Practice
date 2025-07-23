#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    multimap<string, int> m;

    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);

    m.erase(m.find("tv"));

    for(auto p : m) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
